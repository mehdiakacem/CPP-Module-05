/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:13:18 by makacem           #+#    #+#             */
/*   Updated: 2023/06/05 10:29:36 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat mehdi("mehdi", 69);
        std::cout << mehdi;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat youssef("youssef", -54);
        std::cout << youssef;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat omar("omar", 263);
        std::cout << omar;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat mehdi("mehdi", 2);
        std::cout << mehdi;
        mehdi.incrementGrade();
        std::cout << mehdi;
        mehdi.incrementGrade();
        std::cout << mehdi;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat mehdi("mehdi", 149);
        std::cout << mehdi;
        mehdi.decrementGrade();
        std::cout << mehdi;
        mehdi.decrementGrade();
        std::cout << mehdi;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    return 0;
}