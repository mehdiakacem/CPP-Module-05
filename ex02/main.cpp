/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:13:18 by makacem           #+#    #+#             */
/*   Updated: 2023/06/05 11:11:39 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    
    try
    {
        Bureaucrat mehdi("mehdi", 4);
        ShrubberyCreationForm form("garden");

        mehdi.signForm(form);
        form.execute(mehdi);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat mehdi("mehdi", 4);
        RobotomyRequestForm form("garden");

        mehdi.signForm(form);
        form.execute(mehdi);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat mehdi("mehdi", 4);
        PresidentialPardonForm form("garden");

        mehdi.signForm(form);
        form.execute(mehdi);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat mehdi("mehdi", 24);
        PresidentialPardonForm form("garden");

        mehdi.signForm(form);
        form.execute(mehdi);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat mehdi("mehdi", 4);
        PresidentialPardonForm form("garden");

        mehdi.signForm(form);
        mehdi.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat mehdi("mehdi", 24);
        PresidentialPardonForm form("garden");

        mehdi.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return 0;
}