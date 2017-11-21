/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:46:21 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 13:46:21 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

Zombie::~Zombie() {
	std::cout << "\e[0;31m" << this->_name << " is dieeee...\e[0m"<< std::endl;
}

void    Zombie::announce(void) {
	std::cout << "\e[0;32m<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss...\e[0m" << std::endl;
}