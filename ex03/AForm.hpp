/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:38:56 by makacem           #+#    #+#             */
/*   Updated: 2023/06/04 16:26:15 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool isSigned;
        int const grade_to_sign;
        int const grade_to_execute;
    public:
        AForm(void);
        virtual ~AForm(void);
        AForm(std::string const name, const int gradeto_sign, const int gradeto_execute);
        AForm(AForm const &other);
        AForm &operator=(const AForm &other);
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "GradeTooHighException\n";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "GradeTooLowException\n";
                }
        };
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "FormNotSignedException\n";
                }
        };
        std::string getName(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        int getSign(void) const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream   &operator<<(std::ostream &output, AForm const &src);

#endif