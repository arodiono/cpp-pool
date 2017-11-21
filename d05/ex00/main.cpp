/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:06:55 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/06 18:11:57 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {

    Bureaucrat a = Bureaucrat("name", 151);   
    Bureaucrat b = Bureaucrat("name2", -1);
    Bureaucrat c = Bureaucrat("name3", 2);
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    
    a = c;
    
    std::cout << a << std::endl;    
    
    a.incrementGrade();
    a.incrementGrade();
    a.incrementGrade();
    
    std::cout << a << std::endl;        
    
    return 0;
}