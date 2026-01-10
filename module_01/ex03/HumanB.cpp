/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/10 17:13:54 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name )
		: name(name), weapon(NULL) {
	std::cout << "HumanB " << name << " created.\n";
	return ;
}

HumanB::~HumanB( void ) {
	
	std::cout << "HumanB " << this->name << " destroyed.\n";
	return ;
}

void HumanB::attack( void ) {

	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack" << std::endl;
	return ;
}

void HumanB::setWeapon( Weapon& weapon ) {

	this->weapon = &weapon;
	return ;
}
