#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
public:
    // Default Constructor
    Bureaucrat();
    
    // Copy Constructor
    Bureaucrat(const Bureaucrat& other);
    
    // Copy Assignment Operator
    Bureaucrat& operator=(const Bureaucrat& other);
    
    // Destructor
    ~Bureaucrat();

	Bureaucrat(const std::string& name, int grade);

	const std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

private:
	const std::string name;
	int grade;
};

#endif
