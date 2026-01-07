/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/07 14:05:38 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	
	this->newestContactIndex = -1;
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
	if (!is_all_digits(input) || index < 0 || index > NUMBER_CONTACTS - 1) {
		std::cout << "Invalid input!!!\n";
		return ;
	}
	this->phoneBookArray[index].DisplayContactDetails(index);
}

void	PhoneBook::DisplayPhoneBook (void) {
	
	std::cout << "\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	for (int i = 0; i < NUMBER_CONTACTS; i++)
		this->phoneBookArray[i].DisplayContactLine(i);
	std::cout << "|----------|----------|----------|----------|\n";
	std::cout << "\n";
}

void	PhoneBook::AddContact (void) {

	int	newContactIndex;

	newContactIndex = (this->newestContactIndex + 1) % NUMBER_CONTACTS;
	
	std::cout << "\n";
	if (this->phoneBookArray[newContactIndex].AddContact()) {
		this->newestContactIndex = newContactIndex;
		std::cout << "Contact at index " << newContactIndex << " insert with sucess\n";
	} else
		std::cout << "There was a problem adding the contact\n";
		
	std::cout << "\n";
}
