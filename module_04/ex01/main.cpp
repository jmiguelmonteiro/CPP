/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:33:30 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/20 14:42:48 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	const int n = 10;
	
	Animal*	animals[n];
	for (int i=0; i<n/2; i++) {
		animals[i * 2] = new Cat();
		animals[i * 2 + 1] = new Dog();
	}

	for (int i=0; i<n; i++) {
		std::cout << "Animal " << i + 1 << " sound: " << std::endl;
		animals[i]->makeSound();
	}

	for (int i=0; i<n; i++) {
		delete animals[i];
	}

	return 0;
}
