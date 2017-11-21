/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:06:55 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 17:52:32 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    Bureaucrat a = Bureaucrat("BUREAU", 15);
    std::cout << a << std::endl;

    ShrubberyCreationForm s = ShrubberyCreationForm("shruberry");
    RobotomyRequestForm r = RobotomyRequestForm("robotomy");
    PresidentialPardonForm p = PresidentialPardonForm("president");
    
    s.execute(a);
    a.signForm(s);    
    a.executeForm(s);

    r.execute(a);
    a.signForm(r);    
    a.executeForm(r);
    a.executeForm(r);
    a.executeForm(r);
    a.executeForm(r);    

    p.execute(a);
    a.signForm(p);    
    a.executeForm(p);
    return 0;
}