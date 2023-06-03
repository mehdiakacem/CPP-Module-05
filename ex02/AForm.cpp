/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:38:52 by makacem           #+#    #+#             */
/*   Updated: 2023/05/29 16:52:04 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= grade_to_sign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::string AForm::getName(void) const
{
    return this->name;
}

int AForm::getGradeToSign(void) const
{
    return this->grade_to_sign;
}

int AForm::getGradeToExecute(void) const
{
    return this->grade_to_execute;
}

int AForm::getSign(void) const
{
    return this->isSigned;
}

std::ostream   &operator<<(std::ostream &output, AForm const &src)
{
    output << src.getName() << ", AForm grade to sign " << src.getGradeToSign() << ", grade to execute " << src.getGradeToExecute() << ".\n";
    return output;
}



AForm::AForm(std::string const name, int gradeto_sign, int gradeto_execute)
: name(name), grade_to_sign(gradeto_sign), grade_to_execute(gradeto_execute)
{
    isSigned = false;
    if (gradeto_sign < 1 || gradeto_execute < 1)
        throw GradeTooHighException();
    else if (gradeto_sign > 150 || gradeto_execute > 150)
        throw GradeTooLowException();

    std::cout << "AForm Constructor called\n";
}

AForm::AForm(void)
:name(""), grade_to_sign(1), grade_to_execute(1)
{
    isSigned = false;
    std::cout << "AForm Default constructor called\n";
}

AForm::~AForm(void)
{
    std::cout << "AForm Destructor called\n";
}

AForm::AForm(AForm const &other)
:name(other.name), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        *((std::string *)&this->name) = other.name;
        this->isSigned = other.isSigned;
        *((int*)&this->grade_to_execute) = other.grade_to_execute;
        *((int*)&this->grade_to_sign) = other.grade_to_sign;

    }
    return *this;
}
