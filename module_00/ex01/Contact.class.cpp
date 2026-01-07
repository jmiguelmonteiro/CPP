/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/07 13:07:07 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {
	
	// std::cout << "Contact Class: Constructor called.\n";
	return ;
}

Contact::~Contact( void ) {
	
	// std::cout << "Contact Class: Destructor called.\n";
	return ;
}

std::string	Contact::get_firstName(void) const {
	return this->firstName;
}

std::string	Contact::get_lastName(void) const {
	return this->lastName;
}

std::string	Contact::get_nickName(void) const {
	return this->nickName;
}

std::string	Contact::get_phoneNumber(void) const {
	return this->phoneNumber;
}

std::string	Contact::get_darkestSecret(void) const {
	return this->darkestSecret;
}

void	Contact::set_firstName(std::string firstName) {
	this->firstName = firstName;
}

void	Contact::set_lastName(std::string lastName) {
	this->lastName = lastName;
}

void	Contact::set_nickName(std::string nickName) {
	this->nickName = nickName;
}

void	Contact::set_phoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void	Contact::set_darkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

void	Contact::DisplayContactLine(int index) {
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	
	std::cout << "|" << std::setw(10) << index;

	firstName = this->firstName;
	if (firstName.length() > 10)
		firstName = firstName.substr(0, 9) + ".";
	std::cout << "|" << std::setw(10) << firstName;

	lastName = this->lastName;
	if (lastName.length() > 10)
		lastName = lastName.substr(0, 9) + ".";
	std::cout << "|" << std::setw(10) << lastName;
	
	nickName = this->nickName;
	if (nickName.length() > 10)
		nickName = nickName.substr(0, 9) + ".";
	std::cout << "|" << std::setw(10) << nickName << "|\n";

	return ;	
}

void	Contact::DisplayContactDetails(int index) {
	std::cout << "\n";
	std::cout << "Index.........: " << index << "\n";
	std::cout << "First Name....: " << this->firstName << "\n";
	std::cout << "Last Name.....: " << this->lastName << "\n";
	std::cout << "Nick Name.....: " << this->nickName << "\n";
	std::cout << "Phone Number..: " << this->phoneNumber << "\n";
	std::cout << "Darkest Secret: " << this->darkestSecret << "\n";
	std::cout << "\n";
	return ;		
}

bool	Contact::AddContact(void) {
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	if (firstName.empty())
		return (false);

	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	if (lastName.empty())
		return (false);
		
	std::cout << "Nick Name: ";
	std::getline(std::cin, nickName);
	if (nickName.empty())
		return (false);
		
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	if (phoneNumber.empty())
		return (false);
		
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	if (darkestSecret.empty())
		return (false);

	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;

	return (true);
}
