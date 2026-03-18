#include "Dog.hpp"

// Default Constructor
Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

// Copy Constructor
Dog::Dog(const Dog& other) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

// Destructor
Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}
