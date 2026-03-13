#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	// protected:
	// 	long			hitPoints;
	// 	int				energyPoints;
	// 	unsigned int	attackDamage;

	public:
		// Default Constructor
		ScavTrap();
		
		ScavTrap(std::string name);

		// Copy Constructor
		ScavTrap(const ScavTrap& other);
		
		// Copy Assignment Operator
		ScavTrap& operator=(const ScavTrap& other);
		
		// Destructor
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
