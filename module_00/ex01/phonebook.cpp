/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:30:25 by josemigu          #+#    #+#             */
/*   Updated: 2025/12/19 16:40:04 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	std::cout << "Welcome to the PhoneBook App\n\n";
	while (true) {
		std::cout << "Please enter an option (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, input))
			break;
		if (input == "EXIT")
			break;
		else if (input == "SEARCH")
			phoneBook.SearchPhoneBook();
		else if (input == "ADD")
			std::cout << "ADD keyword\n";
		else
			std::cout << "Invalid option!!!\n";
	}
    std::cout.flush();
	return (EXIT_FAILURE);
}
