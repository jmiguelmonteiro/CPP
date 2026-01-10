/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:41:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/10 17:08:30 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

private:

	std::string	type;
	
public:

	Weapon( std::string type );
	~Weapon( void );

	std::string const & getType( void );
	void setType( std::string type );
};

#endif
