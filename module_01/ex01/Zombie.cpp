/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/09 19:54:01 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	
	std::cout << "Constructor called.\n";
	return ;
}

Zombie::~Zombie( void ) {
	
	std::cout << this->name << ": Destructor called.\n";
	return ;
}

void Zombie::announce( void ) {
	
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName( std::string name ) {
	
	this->name = name;
}
