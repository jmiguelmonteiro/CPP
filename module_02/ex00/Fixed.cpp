/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:53:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/04 12:17:31 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default Constructor
Fixed::Fixed() {
    std::cout << "Fixed default constructor called" << std::endl;
	this->value = 0;
}

// Copy Constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Fixed copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Fixed copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Fixed destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
