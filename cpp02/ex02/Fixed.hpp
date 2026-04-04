/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:53:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/06 13:37:38 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	fracBits = 8;
	
public:
	// Default Constructor
	Fixed();

	// Copy Constructor
	Fixed(const Fixed& other);

	// Copy Assignment Operator
	Fixed& operator=(const Fixed& other);

	// Destructor
	~Fixed();

	// A constructor that takes a constant integer as a parameter
	Fixed(const int value);

	// A constructor that takes a constant floating-point number as a parameter
	Fixed(const float value);

	// The 6 comparison operators: >, <, >=, <=, ==, and !=
	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	// The 4 arithmetic operators: +, -, *, and /
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;

	// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
	// post-decrement) operators
	Fixed&	operator++();		// Overloading the prefix operator
	Fixed	operator++(int);	// Overloading the postfix operator
	Fixed&	operator--();		// Overloading the prefix operator
	Fixed	operator--(int);	// Overloading the postfix operator
	
	// static member function min, max
	static Fixed&		min(Fixed& f1, Fixed& f2);
	static const Fixed&	min(const Fixed& f1, const Fixed& f2);
	static Fixed&		max(Fixed& f1, Fixed& f2);
	static const Fixed&	max(const Fixed& f1, const Fixed& f2);
	
	// Member functions
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);

#endif
