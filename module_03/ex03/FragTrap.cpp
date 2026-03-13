#include "FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap() : ClapTrap() {
	this->hitPoints = 120;
	this->energyPoints = 100;
	this->attackDamage = 30;
    std::cout << this->name << ": FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 120;
	this->energyPoints = 100;
	this->attackDamage = 30;
    std::cout << this->name << ": FragTrap constructor with name parameter called" << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap& other) {
    *this = other;
    std::cout << this->name << ": FragTrap copy constructor called" << std::endl;
}

// Copy Assignment Operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
    }
    std::cout << this->name << ": FragTrap copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << this->name << ": FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout  << this->name << ": FragTrap says high-five" << std::endl;
	return ;	
}
