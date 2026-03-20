/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:04:35 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/20 17:15:13 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::AMateria() {

}

AMateria::AMateria(const AMateria& other) {

}

AMateria& AMateria::operator=(const AMateria& other) {
	
}

AMateria::~AMateria() {
	
}

std::string const & AMateria::getType() const {
	return this->type;
}
