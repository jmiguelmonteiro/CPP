/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:41:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/09 19:01:51 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

private:

	std::string	name;
	
public:

	Zombie(std::string	name);
	~Zombie(void);

	void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
