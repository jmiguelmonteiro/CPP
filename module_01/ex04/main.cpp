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
#include <cstdlib>

int main(int argc, char **argv) {

	(void)argv;
	if (argc != 4) {
		std::cout << "Usage: ./a.out {filename} {s1} {s2}\n";
		return (EXIT_FAILURE);
	}
	
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// if (s1.empty() || s2.empty()) {
	// 	std::cout << "either {s1} or {s2} are empty\n";
	// 	return (EXIT_FAILURE);
	// }


	
    return EXIT_SUCCESS;
}
