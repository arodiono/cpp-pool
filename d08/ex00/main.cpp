/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:24:31 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 19:26:50 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
int	main(void) {

	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
try {
	*easyfind(v, 5) = 0;
	std::cout << *easyfind(v, 0) << std::endl;
	std::cout << *easyfind(v, 5) << std::endl;
} catch (std::exception e) {
	std::cout << e.what() << std::endl;
}
return 0;
}