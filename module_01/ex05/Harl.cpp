/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:23:29 by josemigu          #+#    #+#             */
/*   Updated: 2026/02/18 17:55:55 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	return ;
}

Harl::~Harl( void ) {
	
	return ;
}

void	Harl::debug( void ) {
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
				<< "ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info( void ) {
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put"
				<< "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::warning( void ) {
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for"
				<< "years, whereas you started working here just last month." << std::endl;
	return ;
}

void	Harl::error( void ) {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain( std::string level ) {

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funAddr[4])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error};
	
	for (int i = 0; i <=3; i++)
		if (levels[i] == level) {
			(this->*funAddr[i])();
			return ;
		}

	std::cerr << "Level not found!!!" << std::endl;
	return ;
}
