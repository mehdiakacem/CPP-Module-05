/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:42:42 by makacem           #+#    #+#             */
/*   Updated: 2023/06/03 18:48:10 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getGradeToExecute())
    {
        std::ofstream TargetFile(this->getName() + "_shrubbery");
        TargetFile << "            ,@@@@@@@,\n";
        TargetFile << "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
        TargetFile << " ,&&&&%&&%,@@@@@/@@@@@@,8888888/8o\n";
        TargetFile << ",%&&&&&%&&%,@@@@@@@/@@@88888888/88'\n";
        TargetFile << "%&&%&%&/%&&%@@@@@/ /@@@88888888888'\n";
        TargetFile << "%&&%/ %&&&&&@@@ V /@@' `8888 `/88'\n";
        TargetFile << "`&%/ ` /%&'    |.|         | '|8'\n";
        TargetFile << "    |o|        | |         | |\n";
        TargetFile << "    |.|        | |         | |\n";
        TargetFile << "jgs \\/ ._|//_/__/  ,|_//__\\/.  |_//__/_\n";
        TargetFile.close();
    }
    if (!this->getSign())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "Copy ShrubberyCreationForm assignment operator called\n";
    if (this != &other)
    {
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called\n";
}