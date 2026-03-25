/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:26:45 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/25 16:31:19 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->name = "noname_character";
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(const std::string name) {
	this->name = name;
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(const Character& other) {
	this->name = other.name;
	for (int i=0; i < 4; i++) {
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return ;
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		this->name = other.name;
		for (int i=0; i < 4; i++) {
			if (this->inventory[i])
				delete this->inventory[i];
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for (int i=0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	return ;
}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {
	for (int i=0; i < 4; i++)
		if (!this->inventory[i]) {
			this->inventory[i] = m;
			std::cout << this->name << " equiped with materia " << m->getType() << " at inventory slot " << i << std::endl;
		}
	return ;
}

void Character::unequip(int idx) {
	// Must handle the materia
	if (this->inventory[idx]) {
		std::cout << this->name << " unequiped the materia " << this->inventory[idx]->getType() << " that was located at inventory slot " << idx << std::endl;
		this->inventory[idx] = NULL;
	}
	return ;
}

void Character::use(int idx, ICharacter& target) {
	if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
		std::cout << this->name << " used the materia " << this->inventory[idx]->getType() << " located at inventory slot " << idx << std::endl;
	}
	return ;
}
