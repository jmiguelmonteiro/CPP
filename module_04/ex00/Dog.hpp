#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		// Default Constructor
		Dog();
		
		// Copy Constructor
		Dog(const Dog& other);
		
		// Copy Assignment Operator
		Dog& operator=(const Dog& other);
		
		// Destructor
		~Dog();
};

#endif
