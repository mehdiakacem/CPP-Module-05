/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:13:18 by makacem           #+#    #+#             */
/*   Updated: 2023/05/28 16:03:01 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat mehdi("mehdi", 1);
        Bureaucrat karim("karim", 150);
        Bureaucrat simo("simo", 600);
        Bureaucrat reda("reda", -65);

        std::cout << mehdi;
        std::cout << karim;
        mehdi.decrementGrade();
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


    return 0;
}