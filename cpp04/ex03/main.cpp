/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:39:17 by josemigu          #+#    #+#             */
/*   Updated: 2026/03/28 17:29:44 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void subject_test() {
	std::cout << "--- Subject test" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void other_test() {
	std::cout << "--- Other test" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("unknown_materia");

	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(3, *bob);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	yet_another_test() {
	std::cout << "--- Yet another test" << std::endl;

	std::cout << "--- 1. Subject Basic Test ---" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "\n--- 2. Deep Copy & Independence Test ---" << std::endl;
    Character* original = new Character("original");
    original->equip(src->createMateria("ice"));
    
    // Test Copy Constructor
    Character* copy = new Character(*original);
    
    std::cout << "Original uses slot 0: ";
    original->use(0, *bob);
    std::cout << "Copy uses slot 0: ";
    copy->use(0, *bob);

    // Modify original, copy should remain unchanged
    original->unequip(0); 
    std::cout << "After original unequip, copy should still have Ice:" << std::endl;
    copy->use(0, *bob);

    std::cout << "\n--- 3. Floor & Limit Tests ---" << std::endl;
    // Filling inventory to test the 4-slot limit
    original->equip(src->createMateria("ice"));
    original->equip(src->createMateria("ice"));
    original->equip(src->createMateria("ice"));
    original->equip(src->createMateria("ice"));
    
    // This 5th one should go to the floor via your equip logic
    original->equip(src->createMateria("cure")); 

    std::cout << "\n--- 4. Cleanup ---" << std::endl;
    delete bob;
    delete me;
    delete src;
    delete original;
    delete copy;
}

int main() {

	subject_test();
	other_test();
	yet_another_test();
	
	return 0;
}
