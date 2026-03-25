/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:55:34 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/25 18:18:41 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i=0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource created" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i=0; i < 4; i++) {
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i=0; i < 4; i++) {
			if (this->materia[i])
				delete this->materia[i];
			if (other.materia[i])
				this->materia[i] = other.materia[i]->clone();
			else
				this->materia[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->materia[i]) {
			delete this->materia[i];
		}
	}
	std::cout << "MateriaSource destroyed" << std::endl;
	return ;	
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (!materia) {
		std::cout << "Wrong materia!" << std::endl;
		return ;
	}
	for (int i=0; i < 4; i++)
		if (!this->materia[i]) {
			std::cout << "Materia " << materia->getType() << " learned" << std::endl;
			this->materia[i] = materia;
			return ;
		}
	delete materia;
	return ;		
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i=0; i < 4; i++)
		if (this->materia[i] && this->materia[i]->getType() == type) {
			std::cout << "Materia " << type << " created" << std::endl;
			return this->materia[i]->clone();
		}
	std::cout << "Cannot find the " << type << " materia" << std::endl;
	return NULL;
}
