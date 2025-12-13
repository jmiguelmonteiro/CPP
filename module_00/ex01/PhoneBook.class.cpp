/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2025/12/13 15:49:21 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {
	
	this->oldestContactIndex = -1;
	std::cout << "PhoneBook Class: Constructor called.\n";
	return ;
}

PhoneBook::~PhoneBook( void ) {
	
	std::cout << "PhoneBook Class: Destructor called.\n";
	return ;
}
