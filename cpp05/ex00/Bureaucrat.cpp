#include "Bureaucrat.hpp"

// Default Constructor
Bureaucrat::Bureaucrat() : name("default"), grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
}
