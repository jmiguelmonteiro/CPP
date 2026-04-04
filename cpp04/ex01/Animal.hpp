#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		// Default Constructor
		Animal();
		
		// Copy Constructor
		Animal(const Animal& other);
		
		// Copy Assignment Operator
		Animal& operator=(const Animal& other);
		
		// Destructor
		virtual ~Animal();

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
