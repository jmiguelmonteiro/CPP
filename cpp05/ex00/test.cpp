#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bureaucrat1;
	Bureaucrat bureaucrat2(bureaucrat1);
	Bureaucrat bureaucrat3;
	bureaucrat3 = bureaucrat2;

	return 0;
}
