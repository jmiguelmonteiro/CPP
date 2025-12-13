/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2025/12/13 16:36:45 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {
	
	std::cout << "Contact Class: Constructor called.\n";
	return ;
}

Contact::~Contact( void ) {
	
	std::cout << "Contact Class: Destructor called.\n";
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
