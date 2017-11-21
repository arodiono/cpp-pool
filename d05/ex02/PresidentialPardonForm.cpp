/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:47:26 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 17:51:37 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>


PresidentialPardonForm::PresidentialPardonForm(){};
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 72, 45){};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
    *this = obj;
};
PresidentialPardonForm::~PresidentialPardonForm(){};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    _signed = obj._signed;
    return *this;
}

void PresidentialPardonForm::action() const
{
    std::cout << _name << " has been pardoned by Zafod Beeblebrox" << std::endl;
}