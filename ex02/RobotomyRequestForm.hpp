/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:28:58 by makacem           #+#    #+#             */
/*   Updated: 2023/06/03 18:47:52 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
private:
    /* data */
public:
    virtual void execute(Bureaucrat const &executor) const;
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(void);
    ~RobotomyRequestForm(void);
};


#endif