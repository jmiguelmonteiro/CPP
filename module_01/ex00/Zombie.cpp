/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:46:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/09 18:43:19 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string	name ) : name(name) {
	
	std::cout << this->name << ": Constructor called.\n";
	return ;
}

Zombie::~Zombie( void ) {
	
	std::cout << this->name << ": Destructor called.\n";
	return ;
}

void Zombie::announce( void ) {
	
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
