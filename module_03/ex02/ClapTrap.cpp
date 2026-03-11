/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:00:45 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/11 16:05:23 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() : name("nameless"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << this->name << ": ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << this->name << ": ClapTrap constructor with name parameter called" << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << this->name << ": ClapTrap copy constructor called" << std::endl;
}

// Copy Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
    }
    std::cout << this->name << ": ClapTrap copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << this->name << ": ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPoints <= 0) {
		std::cout  << this->name << ": ClapTrap cannot attack " << target << ", he is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout  << this->name << ": ClapTrap cannot attack " << target << ", he has no energy left" << std::endl;
		return ;
	}
	std::cout  << this->name << ": ClapTrap attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
	this->energyPoints--;
	std::cout  << this->name << ": ClapTrap has now " << this->hitPoints << " hit points and " << this->energyPoints << " energy points left" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints <= 0) {
		std::cout  << this->name << ": ClapTrap is already dead" << std::endl;
		return ;
	}
	std::cout  << this->name << ": ClapTrap has taken an attack of " << amount << " points of damage" << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints <= 0) {
		std::cout  << this->name << ": ClapTrap has died with this attack" << std::endl;
	}
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout  << this->name << ": ClapTrap has now " << this->hitPoints << " hit points and " << this->energyPoints << " energy points left" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints <= 0) {
		std::cout  << this->name << ": ClapTrap cannot repair itself, he is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout  << this->name << ": ClapTrap cannot repair itself, he has no energy left" << std::endl;
		return ;
	}
	if (this->hitPoints + amount >= 10000000000) {
		std::cout  << this->name << ": ClapTrap repairs itself, he reached the maximum of 10000000000 hit point" << std::endl;
		this->hitPoints = 10000000000;
	} else {
		std::cout  << this->name << ": ClapTrap repairs itself, increasing the hit points by " << amount << std::endl;
		this->hitPoints += amount;
	}
	this->energyPoints--;
	std::cout  << this->name << ": ClapTrap has now " << this->hitPoints << " hit points and " << this->energyPoints << " energy points left" << std::endl;
	return ;
}
