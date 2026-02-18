/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:15:41 by josemigu          #+#    #+#             */
/*   Updated: 2026/02/18 18:24:46 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int main(int argc, char **argv) {

	Harl	instance;
	std::string	level;
	
	if (argc != 2) {
		std::cerr << "Usage: ./a.out {level}\n";
		return (EXIT_FAILURE);
	}
	level = argv[1];

	instance.complain(level);
	
    return EXIT_SUCCESS;
}
