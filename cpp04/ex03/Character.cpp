/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:26:45 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/28 17:23:35 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->name = "noname_character";
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i=0; i < 100; i++)
		this->floor[i] = NULL;
	std::cout << "Character "  << this->name << " created" << std::endl;
	return ;
}

Character::Character(const std::string name) {
	this->name = name;
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i=0; i < 100; i++)
		this->floor[i] = NULL;
	std::cout << "Character "  << this->name << " created" << std::endl;
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
	for (int i=0; i < 100; i++) {
		if (other.floor[i])
			this->floor[i] = other.floor[i]->clone();
		else
			this->floor[i] = NULL;
	}	return ;
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
		for (int i=0; i < 100; i++) {
			if (this->floor[i])
				delete this->floor[i];
			if (other.floor[i])
				this->floor[i] = other.floor[i]->clone();
			else
				this->floor[i] = NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for (int i=0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	for (int i=0; i < 100; i++)
		if (this->floor[i])
			delete this->floor[i];
	std::cout << "Character "  << this->name << " destroyed" << std::endl;
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
			return ;
		}
	for (int i = 0; i < 100; i++) {
		if (!this->floor[i]) {
			this->floor[i] = m;
			std::cout << this->name << " discarded materia to the floor " << m->getType() << ", all slots are full" << std::endl;
			break ;
		}
	}
	return ;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !this->inventory[idx])
		return ;
	for (int i = 0; i < 100; i++) {
		if (!this->floor[i]) {
			std::cout << this->name << " unequiped the materia " << this->inventory[idx]->getType() << " that was located at inventory slot " << idx << std::endl;
			this->floor[i] = this->inventory[idx];
			this->inventory[idx] = NULL;	
			break ;
		}
	}
	return ;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !this->inventory[idx])
		return ;
	if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
		// this->inventory[idx]->AMateria::use(target);
		std::cout << this->name << " used the materia " << this->inventory[idx]->getType() << " located at inventory slot " << idx << std::endl;
	}
	return ;
}
