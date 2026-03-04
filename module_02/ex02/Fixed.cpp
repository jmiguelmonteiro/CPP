/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:53:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/04 13:21:23 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default Constructor
Fixed::Fixed() {
    std::cout << "Fixed default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value) {
    std::cout << "Fixed int constructor called" << std::endl;
	this->value = value << this->fracBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Fixed float constructor called" << std::endl;
	this->value = static_cast<int>(roundf(value *(1 << this->fracBits)));
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

int	Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat( void ) const {
	return(static_cast<float>(this->value) / (1 << this->fracBits));
}

int	Fixed::toInt( void ) const {
	return(this->value >> this->fracBits);
}

std::ostream& operator<<(std::ostream& os, Fixed const& fixed) {
	os << fixed.toFloat();
	return (os);
}
