#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	brain;

	public:
		// Default Constructor
		Dog();
		
		// Copy Constructor
		Dog(const Dog& other);
		
		// Copy Assignment Operator
		Dog& operator=(const Dog& other);
		
		// Destructor
		~Dog();

		void	makeSound(void) const;
};

#endif
