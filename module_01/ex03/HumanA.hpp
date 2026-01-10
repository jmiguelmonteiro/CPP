/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:41:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/10 17:23:37 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {

private:

	std::string	name;
	Weapon&		weapon;
	
public:

	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	void	attack( void );
};

#endif
