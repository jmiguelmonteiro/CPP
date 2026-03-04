/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:53:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/04 13:21:10 by josemigu         ###   ########.fr       */
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
	
	// Member functions
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);

#endif
