/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:00:54 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/11 13:22:39 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string	name;
	long			hitPoints;
	int				energyPoints;
	unsigned int	attackDamage;
	
public:
    // Default Constructor
    ClapTrap();
    
    ClapTrap(std::string name);

	// Copy Constructor
    ClapTrap(const ClapTrap& other);
    
    // Copy Assignment Operator
    ClapTrap& operator=(const ClapTrap& other);
    
    // Destructor
    ~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
