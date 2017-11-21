/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:11:15 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 12:58:34 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony*    ponyOnTheHeap(std::string name) {
	Pony* tmp = new Pony(name);
	std::cout << "in HEAP\e[0m" << std::endl;
	return tmp;
}

Pony    ponyOnTheStack(std::string name) {
	Pony tmp = Pony(name);
	std::cout << "in STACK\e[0m" << std::endl;
	return tmp;
}

int     main(void)
{
	Pony kon = ponyOnTheStack("KON`");
	Pony* loshadka = ponyOnTheHeap("LOSHADKA");

	delete loshadka;
	return 0;
}
