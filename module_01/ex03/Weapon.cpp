/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/09 19:54:01 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) : type(type) {
	
	std::cout << "Weapon: " << type << " created\n";
	return ;
}

Weapon::~Weapon( void ) {
	
	std::cout << "Weapon: " << this->type << " destroyed\n";
	return ;
}

std::string const & Weapon::getType( void ) {
	
	return (this->type);
}

void Weapon::setType( std::string type ) {
	
	this->type = type;
	return;
}
