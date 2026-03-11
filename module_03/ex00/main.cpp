/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:15:41 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/11 13:04:18 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	// ClapTrap	nameless;
	// ClapTrap	bob("Bob");

    ClapTrap trapTiago("Tiago");
    ClapTrap trapKiko("Kiko");
    ClapTrap noName;
    trapTiago.takeDamage(5);
    for (int i = 0; i< 11; i++)
        trapTiago.attack("Kiko");
    for (int i = 0; i < 11; i++)
        trapKiko.takeDamage(1);
    trapKiko.takeDamage(0);
    noName.beRepaired(100);
    noName.beRepaired(100);
    for (int i = 0; i < 11; i++)
        noName.takeDamage(25);
    ClapTrap cloneTiago(trapTiago);
    cloneTiago.attack("Alberto"); // dont attack because dont have EnergyPoints.
    ClapTrap test;
    test.beRepaired(4294967295);
    test.beRepaired(4294967295);
    test.beRepaired(4294967295); 
    test.takeDamage(4294967295);
    test.takeDamage(1);
	
	return (0);
}
