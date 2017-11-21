/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:05:58 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 23:45:08 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
int main()
{
	srand(time(0));
	Span sp = Span(1);

	try {
		sp.addNumber(1);
		// sp.addNumber(5);
		// sp.addNumber(100);
		// sp.addNumber(101);
		// sp.addNumber(101);
		// sp.addNumber(101);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
