/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:14:23 by makacem           #+#    #+#             */
/*   Updated: 2023/06/03 18:36:19 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
        const std::string name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &other);
        Bureaucrat  &operator=(const Bureaucrat &other);
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        std::string getName(void) const;
        int     getGrade(void) const;
        void    incrementGrade(void);
        void    decrementGrade(void);
        class GradeTooHighException;
        class GradeTooLowException;
        void    signForm(AForm &form);
        void    executeForm(AForm const &form);

};

std::ostream   &operator<<(std::ostream &output, Bureaucrat const &src);

#endif