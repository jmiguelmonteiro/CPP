/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:15:41 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/09 19:55:25 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	*zombie_horde;

	zombie_horde = zombieHorde(0, "Horde 0 zombie element");

	zombie_horde = zombieHorde(1, "Horde 1 zombies element");
	for (int i = 0; i < 1; i++)
		zombie_horde[i].announce();
	delete [] zombie_horde;

	zombie_horde = zombieHorde(5, "Horde 5 zombies element");
	for (int i = 0; i < 5; i++)
		zombie_horde[i].announce();
	delete [] zombie_horde;

	return (0);
}
