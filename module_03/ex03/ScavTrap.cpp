#include "ScavTrap.hpp"

// Default Constructor
ScavTrap::ScavTrap() : ClapTrap() {
	this->hitPoints = 150;
	this->energyPoints = 50;
	this->attackDamage = 20;
    std::cout << this->name << ": ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 150;
	this->energyPoints = 50;
	this->attackDamage = 20;
    std::cout << this->name << ": ScavTrap constructor with name parameter called" << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap& other) {
    *this = other;
    std::cout << this->name << ": ScavTrap copy constructor called" << std::endl;
}

// Copy Assignment Operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
    }
    std::cout << this->name << ": ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << this->name << ": ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->hitPoints <= 0) {
		std::cout  << this->name << ": ScavTrap cannot attack " << target << ", he is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout  << this->name << ": ScavTrap cannot attack " << target << ", he has no energy left" << std::endl;
		return ;
	}
	std::cout  << this->name << ": ScavTrap attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
	this->energyPoints--;
	std::cout  << this->name << ": ScavTrap has now " << this->hitPoints << " hit points and " << this->energyPoints << " energy points left" << std::endl;
	return ;
}

void	ScavTrap::guardGate() {
	std::cout  << this->name << ": ScavTrap is now in Gatekeeper mode" << std::endl;
	return ;	
}
