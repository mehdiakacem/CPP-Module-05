/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:13:18 by makacem           #+#    #+#             */
/*   Updated: 2023/05/29 18:43:46 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat mehdi("mehdi", 2);
        Form test("testform", 5, 50);

        std::cout << test;
    
        mehdi.signForm(test);

    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }

    return 0;
}