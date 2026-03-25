/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:52:15 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/25 18:05:36 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	return ;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	return ;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Cure::~Cure() {
	return ;	
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}
