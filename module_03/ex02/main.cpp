#include "FragTrap.hpp"

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
    testFragTrap();

    return 0;
}
