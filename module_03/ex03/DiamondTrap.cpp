
#include "DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	this->name = "nameless";
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
    std::cout << this->name << ": DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap() {
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
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
        // Copy attributes here
    }
    std::cout << this->name << ": Diamond Trap copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << this->name << ": DiamondTrap destructor called" << std::endl;
}
