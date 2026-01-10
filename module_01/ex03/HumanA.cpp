/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/10 17:23:51 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon)
		: name(name), weapon(weapon) {
	std::cout << "HumanA " << name << " with weapon " << weapon.getType() << " created.\n";
	return ;
}

HumanA::~HumanA( void ) {
	
	std::cout << "HumanA " << this->name << " destroyed.\n";
	return ;
}

void HumanA::attack( void ) {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}
