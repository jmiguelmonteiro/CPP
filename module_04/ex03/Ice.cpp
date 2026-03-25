/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:52:15 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/25 15:27:58 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	return ;
}

Ice::Ice(const Ice& other) {
	*this = other;
	return ;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Ice::~Ice() {
	return ;	
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
