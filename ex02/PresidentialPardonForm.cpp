/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:34:58 by makacem           #+#    #+#             */
/*   Updated: 2023/06/03 18:47:58 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getGradeToExecute())
    {
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox\n";
    }
    if (!this->getSign())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm(target, 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "Copy PresidentialPardonForm assignment operator called\n";
    if (this != &other)
    {
    }
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called\n";
}