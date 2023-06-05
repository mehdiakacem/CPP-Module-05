/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:17:03 by makacem           #+#    #+#             */
/*   Updated: 2023/06/05 11:18:10 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


AForm   *Intern::creates_robotomy(std::string target)
{
    std::cout << "Intern creates robotomy request\n";
    return (new RobotomyRequestForm(target));
}

AForm   *Intern::shrubbery_creation(std::string target)
{
    std::cout << "Intern creates shrubbery creation\n";
    return (new ShrubberyCreationForm(target));
}

AForm   *Intern::presidential_pardon(std::string target)
{
    std::cout << "Intern creates presidential pardon\n";
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    AForm   *(Intern::*fp[3])(std::string target) = {&Intern::creates_robotomy, &Intern::shrubbery_creation, &Intern::presidential_pardon};

    for (int i = 0; i < 4; i++)
    {
        if (name == forms[i])
        {
            return((this->*(fp[i]))(target));
            break;
        }
    }
    std::cout << "error: form name passed as parameter doesn’t exist\n";
    return (NULL);
}


Intern::Intern(void)
{
    std::cout << "Intern default constructor called\n";
}

Intern::Intern(Intern const &other)
{
    std::cout << "Intern copy constructor called\n";
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
    }
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called\n";
}