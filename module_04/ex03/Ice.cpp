/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:52:15 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/20 18:02:48 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	return ;
}

Ice::Ice(const Ice& other) {

}

Ice& Ice::operator=(const Ice& other) {

}

Ice::~Ice() {
	
}

AMateria* Ice::clone() const {

}

void Ice::use(ICharacter& target) {
	
}
