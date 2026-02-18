/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:15:41 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/10 17:38:47 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

void	replace(std::ifstream &inFile, std::ofstream &outFile, const std::string s1, const std::string s2) {

	std::string	nextLine;

	while (getline(inFile, nextLine)) {
		std::size_t pos = 0;
		while ((pos = nextLine.find(s1, pos)) != std::string::npos) {
			nextLine.erase(pos, s1.length());
			nextLine.insert(pos, s2);
			pos += s2.length();
		}
		outFile << nextLine << std::endl;		
	}
}

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "Usage: ./a.out {filename} {s1} {s2}\n";
		return (EXIT_FAILURE);
	}
	
	std::string	inFileName = argv[1];
	std::string	outFileName = inFileName + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "{s1} cannot be empty\n";
		return (EXIT_FAILURE);
	}

	std::ifstream	inFile;
	inFile.open(inFileName.c_str());
	if (!inFile.is_open()) {
		std::cerr << "Cannot open input file: " << inFileName << std::endl;
		return (EXIT_FAILURE);
	}

	std::ofstream	outFile;
	outFile.open(outFileName.c_str());
	if (!outFile.is_open()) {
		std::cerr << "Cannot open output file: " << outFileName << std::endl;
		return (EXIT_FAILURE);
	}
	
	replace(inFile, outFile, s1, s2);

	outFile.close();
	inFile.close();
    return EXIT_SUCCESS;
}
