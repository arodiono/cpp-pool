/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:17:18 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 16:17:18 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n) {
	this->zombies = new Zombie[this->_n];
}

ZombieHorde::~ZombieHorde() {
	delete[] this->zombies;
}

void ZombieHorde::announce() {
	for (int i = 0; i < this->_n; i++) {
		this->zombies[i].announce();
	}
}