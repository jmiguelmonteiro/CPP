#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		// Default Constructor
		FragTrap();
		
		FragTrap(std::string name);

		// Copy Constructor
		FragTrap(const FragTrap& other);
		
		// Copy Assignment Operator
		FragTrap& operator=(const FragTrap& other);
		
		// Destructor
		~FragTrap();

		void highFivesGuys(void);
};

#endif
