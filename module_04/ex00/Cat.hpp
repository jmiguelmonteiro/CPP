#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		// Default Constructor
		Cat();
		
		// Copy Constructor
		Cat(const Cat& other);
		
		// Copy Assignment Operator
		Cat& operator=(const Cat& other);
		
		// Destructor
		~Cat();

		void	makeSound(void);

};

#endif
