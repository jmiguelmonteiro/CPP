/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:04:35 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/28 16:53:13 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	this->type = type;
	return ;
}

AMateria::AMateria() {
	this->type = "unknown";
	return ;
}

AMateria::AMateria(const AMateria& other) {
	*this = other;	
	return ;
}

AMateria& AMateria::operator=(const AMateria& other) {
	(void)other;
	return *this;		
}

AMateria::~AMateria() {
	return ;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria used on " << target.getName() << std::endl;
	return ;
}
