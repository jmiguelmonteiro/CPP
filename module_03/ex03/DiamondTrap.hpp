#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	private:
		std::string	name;

	public:
		// Default Constructor
		DiamondTrap();

		DiamondTrap(std::string name);

		// Copy Constructor
		DiamondTrap(const DiamondTrap& other);
		
		// Copy Assignment Operator
		DiamondTrap& operator=(const DiamondTrap& other);
		
		// Destructor
		~DiamondTrap();
};

#endif
