/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:52:15 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/20 18:18:05 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	return ;
}

Cure::Cure(const Cure& other) {

}

Cure& Cure::operator=(const Cure& other) {

}

Cure::~Cure() {
	
}

AMateria* Cure::clone() const {

}

void Cure::use(ICharacter& target) {
	
}
