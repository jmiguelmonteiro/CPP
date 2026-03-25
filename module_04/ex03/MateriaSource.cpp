/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:55:34 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/25 16:51:47 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other) {

}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {

}

MateriaSource::~MateriaSource() {
	for (int i=0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	return ;	
}

void MateriaSource::learnMateria(AMateria*) {
	
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	
}
