/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:06:55 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/06 22:33:19 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{

    Bureaucrat a = Bureaucrat("dood", 2);
    Bureaucrat b = Bureaucrat("lalala", 152);
    std::cout << a << std::endl;
    a.incrementGrade();
    a.incrementGrade();
    std::cout << a << std::endl;

    Form f = Form();
    std::cout << f << std::endl;

    a.signForm(f);

    Form g = Form("ffff", 140, 111);

    std::cout << b << std::endl;
    b.signForm(g);
    return 0;
}