/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:23:29 by josemigu          #+#    #+#             */
/*   Updated: 2026/02/18 18:29:38 by josemigu         ###   ########.fr       */
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
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!\n" << std::endl;
	return ;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\n"
				<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
	return ;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, whereas you started working here just last month.\n" << std::endl;
	return ;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
	return ;
}

void	Harl::complain( std::string level ) {

	int			i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funAddr[4])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error};
	
	for (i = 0; i <=3; i++)
		if (levels[i] == level) {
			break ;
			(this->*funAddr[i])();
			return ;
		}
	switch (i) {
		case 0:
			(this->*funAddr[i++])();
		case 1:
			(this->*funAddr[i++])();
		case 2:
			(this->*funAddr[i++])();
		case 3:
			(this->*funAddr[i++])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			break;
	}

	return ;
}
