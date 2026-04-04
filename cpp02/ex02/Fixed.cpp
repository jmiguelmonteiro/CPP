/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:53:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/06 15:30:40 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default Constructor
Fixed::Fixed() {
    // std::cout << "Fixed default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value) {
    // std::cout << "Fixed int constructor called" << std::endl;
	this->value = value << this->fracBits;
}

Fixed::Fixed(const float value) {
    // std::cout << "Fixed float constructor called" << std::endl;
	this->value = static_cast<int>(roundf(value *(1 << this->fracBits)));
}

// Copy Constructor
Fixed::Fixed(const Fixed& other) {
    // std::cout << "Fixed copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Fixed& Fixed::operator=(const Fixed& other) {
    // std::cout << "Fixed copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    // std::cout << "Fixed destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
    // std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits( int const raw ) {
    // std::cout << "setRawBits member function called" << std::endl;
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

bool	Fixed::operator>(const Fixed& other) const {
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->value < other.value);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->value != other.value);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed res;
	res.value = this->value + other.value;
	return (res);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed res;
	res.value = this->value - other.value;
	return (res);
}

Fixed	Fixed::operator*(const Fixed& other) const {
	Fixed res;
	res.value = (this->value * other.value) >> this->fracBits;
	return (res);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed res;
	res.value = ((this->value  << this->fracBits) / other.value);
	return (res);
}

// Overloading the prefix operator
Fixed&	Fixed::operator++() {
	++this->value;
	return (*this);
}

// Overloading the postfix operator
Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;
	this->value++;
	return (temp);
}

// Overloading the prefix operator
Fixed&	Fixed::operator--() {
	--this->value;
	return (*this);	
}

// Overloading the postfix operator
Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;
	this->value--;
	return (temp);	
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
	
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);	
}
