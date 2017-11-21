/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:06:55 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 19:58:12 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Bureaucrat dv = Bureaucrat("DART VEIDER", 15);
	Intern someRandomIntern;
	Form* rrf;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->execute(dv);
	dv.signForm(*rrf);
	rrf->execute(dv);
	
	rrf = someRandomIntern.makeForm("presidential pardon", "Sponge bob");
	rrf = someRandomIntern.makeForm("shrubbery creation", "Simba");
	
	return 0;
}