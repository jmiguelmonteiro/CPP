
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void		WrongCat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
