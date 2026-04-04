#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void testClapTrap()
{

}

void testScavTrap()
{

}

void testFragTrap()
{
    FragTrap john("John");
    FragTrap doe("Doe");
    FragTrap nameless;

	nameless.highFivesGuys();

	john.attack("Random guy");

	std::cout << "-- FragTrap maria(john) --" << std::endl;
	FragTrap maria(john);
	std::cout << "-- FragTrap maria(john) --" << std::endl;
}

int main(void)
{

	std::cout << "------- Start of ClapTrap tests -------" << std::endl;
    testClapTrap();
	std::cout << "------- End of ClapTrap tests ---------" << std::endl << std::endl;
	std::cout << "------- Start of ScavTrap tests -------" << std::endl;
    testScavTrap();
	std::cout << "------- End of ScavTrap tests ---------" << std::endl << std::endl;
	std::cout << "------- Start of FragTrap tests -------" << std::endl;
    testFragTrap();
	std::cout << "------- End of FragTrap tests ---------" << std::endl << std::endl;

    return 0;
}
