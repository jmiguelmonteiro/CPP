#include "Animal.hpp"

// Default Constructor
Animal::Animal() : type("") {
    std::cout << "Animal default constructor called" << std::endl;
	this->type = "(type not defined)";
}

// Copy Constructor
Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

// Destructor
Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const {
	return ;
}

std::string		Animal::getType(void) const {
	return this->type;
}
