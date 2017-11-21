/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:36:28 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 18:14:54 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

static int i = 1;

RobotomyRequestForm::RobotomyRequestForm(){};
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
    *this = obj;
};
RobotomyRequestForm::~RobotomyRequestForm(){};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    _signed = obj._signed;
    return *this;
}

void RobotomyRequestForm::action() const
{
    std::cout << "*NOOOOOOISE*";
    if (i % 2 == 0)
    {
        std::cout << _name << "  has been robotomized successfully";
    }
    else
    {
        std::cout << _name << "  has not been robotomized";
    }
    std::cout << std::endl;
    i++;
}