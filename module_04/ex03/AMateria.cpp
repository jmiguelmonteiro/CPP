/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:04:35 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/25 16:15:12 by josemigu         ###   ########.fr       */
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
	if (this != &other) {
		this->type = other.type;
	}
	return *this;		
}

AMateria::~AMateria() {
	return ;
}

std::string const & AMateria::getType() const {
	return this->type;
}
