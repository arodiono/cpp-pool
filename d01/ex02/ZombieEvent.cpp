/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:46:29 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 13:46:29 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie* tmp = new Zombie(name, this->_type);
	return tmp;
}

void    ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::randomChump(void) {
	std::string names[5] = {"Oliver", "Toldo", "James", "Bradly", "Robert"};
	std::string types[5] = {"NULL", "POINT", "CHAR", "PONY", "CAST"};
	this->setZombieType(types[(rand() % 5)]);
	this->_zombie = this->newZombie(names[(rand() % 5)]);
	this->_zombie->announce();
	return this->_zombie;
}