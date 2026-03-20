#include "Cat.hpp"

// Default Constructor
Cat::Cat() : Animal() {
    std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

// Copy Constructor
Cat::Cat(const Cat& other) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
		this->brain = other.brain;
    }
    return *this;
}

// Destructor
Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
