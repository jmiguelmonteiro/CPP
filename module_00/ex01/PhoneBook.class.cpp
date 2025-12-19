/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2025/12/19 16:41:04 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	
	this->oldestContactIndex = -1;
	// std::cout << "PhoneBook Class: Constructor called.\n";
	return ;
}

PhoneBook::~PhoneBook(void) {
	
	// std::cout << "PhoneBook Class: Destructor called.\n";
	return ;
}

void	PhoneBook::SearchPhoneBook (void) {
	
	std:: string	input;
	int				index;
	
	this->DisplayPhoneBook();
	std::cout << "Index details (empty or invalid to exit): ";
	std::getline(std::cin, input);
	index = std::atoi(input.c_str());
	if (!is_all_digits(input) || index < 0 || index > 7) {
		std::cout << "Invalid input!!!\n";
		return ;
	}
	this->phoneBookArray[index].DisplayContactDetails(index);
}

void	PhoneBook::DisplayPhoneBook (void) {
	
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	for (int i = 0; i < 8; i++)
		this->phoneBookArray[i].DisplayContactLine(i);
	std::cout << "|----------|----------|----------|----------|\n";
}
