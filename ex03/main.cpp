/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:13:18 by makacem           #+#    #+#             */
/*   Updated: 2023/06/04 17:30:55 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat mehdi("mehdi", 5);
    Intern karim;
    AForm   *rrf;
    
    rrf = karim.makeForm("shrubbery", "home");
    if (rrf == NULL)
        return 1;
    mehdi.signForm(*rrf);
    mehdi.executeForm(*rrf);
    delete rrf;
    return 0;
}