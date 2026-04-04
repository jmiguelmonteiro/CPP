/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:06:33 by josemigu          #+#    #+#             */
/*   Updated: 2026/02/18 17:16:42 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	
public:

	Harl( void );
	~Harl( void );

	void	complain( std::string level );
};

#endif
