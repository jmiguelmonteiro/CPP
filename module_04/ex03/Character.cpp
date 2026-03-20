/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:26:45 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/20 17:39:54 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->name = "noname";
}

Character::Character(const Character& other) {

}

Character& Character::operator=(const Character& other) {

}

Character::~Character() {
	
}

Character::Character(const std::string name) {
	this->name = name;
}

		
std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter& target) {
	
}
		