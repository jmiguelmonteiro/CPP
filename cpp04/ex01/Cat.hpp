#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	brain;

	public:
		// Default Constructor
		Cat();
		
		// Copy Constructor
		Cat(const Cat& other);
		
		// Copy Assignment Operator
		Cat& operator=(const Cat& other);
		
		// Destructor
		~Cat();

		void	makeSound(void) const;
};

#endif
