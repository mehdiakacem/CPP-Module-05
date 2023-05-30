/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:38:56 by makacem           #+#    #+#             */
/*   Updated: 2023/05/29 15:21:12 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool isSigned;
        int const grade_to_sign;
        int const grade_to_execute;
    public:
        Form(void);
        ~Form(void);
        Form(std::string const name, const int gradeto_sign, const int gradeto_execute);
        Form(Form const &other);
        Form &operator=(const Form &other);
        class GradeTooHighException;
        class GradeTooLowException;
        std::string getName(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        int getSign(void) const;
        void beSigned(Bureaucrat &bureaucrat);
};

std::ostream   &operator<<(std::ostream &output, Form const &src);

#endif