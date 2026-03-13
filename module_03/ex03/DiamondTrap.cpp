/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:23:36 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/13 15:49:48 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap("nameless_clap_name"), FragTrap(), ScavTrap(), name("nameless") {
	this->hitPoints = FragTrap::hitPoints;			// 100
	this->energyPoints = ScavTrap::energyPoints;	// 50
	this->attackDamage = FragTrap::attackDamage;	// 30
    std::cout << this->name << ": DiamondTrap default constructor called" << std::endl;
	std::cout << this->hitPoints << std::endl;
	std::cout << this->energyPoints << std::endl;
	std::cout << this->attackDamage << std::endl;
	// std::cout << this->Fra << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
    std::cout << this->name << ": DiamondTrap constructor with name parameter called" << std::endl;
}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) {
    *this = other;
    std::cout << this->name << ": DiamondTrap copy constructor called" << std::endl;
}

// Copy Assignment Operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
    }
    std::cout << this->name << ": Diamond Trap copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << this->name << ": DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "Hello, my DiamondTrap name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

long	DiamondTrap::getHitPoints() {
	return (this->hitPoints);
}
