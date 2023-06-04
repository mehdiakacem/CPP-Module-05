/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:33:09 by makacem           #+#    #+#             */
/*   Updated: 2023/06/03 18:47:15 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getGradeToExecute())
    {
        std::cout << "<<some drilling noises>>\n";
        srand((unsigned) time(NULL));
        
        int random = rand() % 2;
        if (random)
            std::cout << this->getName() << " has been robotomized successfully\n";
        else
            std::cout << "Robotomy failed\n";
    }
    if (!this->getSign())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm(target, 72, 45)
{
    
    std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "Copy RobotomyRequestForm assignment operator called\n";
    if (this != &other)
    {
    }
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

RobotomyRequestForm::RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called\n";
}