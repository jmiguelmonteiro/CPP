/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:23:54 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/13 15:36:54 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	private:
		std::string	name;

	// protected:
	// 	long			hitPoints;
	// 	int				energyPoints;
	// 	unsigned int	attackDamage;
		
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

		void whoAmI();
		long	getHitPoints();
};

#endif
