/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:02:32 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 18:17:34 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void) {

	Array<int> a(2);
	Array<std::string> s(2);
	Array<std::string> s2(2);

	try {
		a[0] = 42;
		a[1] = 21;

		s[0] = "lorem ";
		s[1] = "ipsum";

		s2[0] = "aaaaa";
		s2[1] = "bbbbb";

		s = s2;

		s2[0] = "cccc";
		std::cout << a[0] << std::endl;
		std::cout << a[1] << std::endl;

		std::cout << s[0] << std::endl;
		std::cout << s[1] << std::endl;

		std::cout << s[2] << std::endl;
	} catch (std::exception e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}