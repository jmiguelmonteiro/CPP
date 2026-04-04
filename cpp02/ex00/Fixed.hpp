/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:53:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/04 12:55:04 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

	// Member functions
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
