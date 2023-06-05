/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:13:18 by makacem           #+#    #+#             */
/*   Updated: 2023/06/05 10:53:55 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form form("form", 20, 10);
        std::cout << form;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    

    try
    {
        Form form1("form1", -57, 10);
        std::cout << form1;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    
    try
    {
        Form form1("form1", 20, 954);
        std::cout << form1;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  mehdi("mehdi", 6);
        Form form("form", 20, 10);
        form.beSigned(mehdi);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  mehdi("mehdi", 65);
        Form form("form", 20, 10);
        form.beSigned(mehdi);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  mehdi("mehdi", 6);
        Form form("form", 20, 10);
        form.beSigned(mehdi);
        std::cout << form;
        mehdi.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  mehdi("mehdi", 6);
        Form form("form", 20, 10);
        std::cout << form;
        mehdi.signForm(form);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  mehdi("mehdi", 61);
        Form form("form", 20, 10);
        std::cout << form;
        mehdi.signForm(form);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    
    return 0;
}