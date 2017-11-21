/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:56:29 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/08 20:56:30 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer( Base * p ) {
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A" << std::endl;
	if (b)
		std::cout << "B" << std::endl;
	if (c)
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p ) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception e){
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::exception e) {
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::exception e) {}
		}
	}
}

Base * generate(void) {
	switch (rand() % 3) {
		case 0 : { return new A(); };
		case 1 : { return new B(); };
		case 2 : { return new C(); };
		default : { return new Base(); };
	}
}

int main (void ) {
	srand(time(NULL));
	Base *ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	delete ptr;
	return (0);
}
