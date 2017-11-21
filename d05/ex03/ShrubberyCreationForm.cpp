/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:27:21 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 17:34:23 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {};
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) {
    *this = obj; 
};
ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
    _signed = obj._signed;
    return *this;
}

void    ShrubberyCreationForm::action() const {

    std::ofstream fs;

    fs.open(_name + "_shrubbery", std::ofstream::out);
    if (fs.good()) {
        fs << "\\" << "\\" << "\\" << "|///" << std::endl << "  \\|/" << std::endl << "   |" << std::endl << std::endl;
        fs << "\\" << "\\" << "\\" << "|///" << std::endl << "  \\|/" << std::endl << "   |" << std::endl << std::endl;
        fs << "\\" << "\\" << "\\" << "|///" << std::endl << "  \\|/" << std::endl << "   |" << std::endl;        
    }
    fs.close();
}