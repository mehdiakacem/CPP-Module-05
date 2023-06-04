/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:17:05 by makacem           #+#    #+#             */
/*   Updated: 2023/06/04 17:05:24 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{

    public:
        AForm   *creates_robotomy(std::string target);
        AForm   *shrubbery_creation(std::string target);
        AForm   *presidential_pardon(std::string target);
        AForm *makeForm(std::string name, std::string target);
        Intern(void);
        Intern(Intern const &other);
        Intern  &operator=(const Intern &other);
        ~Intern();

};


#endif