/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:17:37 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 16:17:37 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main(void) {

	int i[] = {1,2,3,4,5};
	ZombieHorde* horde;

	for (int j = 0; j < 5; ++j) {
		horde = new ZombieHorde(i[j]);
		horde->announce();
		delete horde;
	}
	return 0;
}