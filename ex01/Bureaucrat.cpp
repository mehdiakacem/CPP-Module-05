/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:03:48 by makacem           #+#    #+#             */
/*   Updated: 2023/05/29 15:31:40 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void   Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what();
    }
    
}

class Bureaucrat::GradeTooHighException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Bureaucrat::GradeTooHighException\n";
        }
};

class Bureaucrat::GradeTooLowException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Bureaucrat::GradeTooLowException\n";
        }
};

Bureaucrat::Bureaucrat(std::string const name, int grade)
: name(name)
{

    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    std::cout << "Bureaucrat Constructor called\n";
}

void    Bureaucrat::incrementGrade(void)
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrementGrade(void)
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        this->grade = other.grade;
        (std::string)this->name = other.name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called\n";
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

std::ostream   &operator<<(std::ostream &output, Bureaucrat const &src)
{
    output << src.getName() << ", bureaucrat grade " << src.getGrade() << ".\n";
    return output;
}
