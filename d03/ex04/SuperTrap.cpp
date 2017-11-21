/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 20:27:37 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 23:28:59 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(){
    this->setName("Default");    
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(120);
    this->setMaxEp(120);
    this->setLvl(1);
    this->setMelee(60);
    this->setRanged(20);
    this->setArmour(5);
    std::cout << "SUPR-TP " << _name << " constructed!" << std::endl;
}

SuperTrap::SuperTrap(std::string const name) {
    this->setName(name);    
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(120);
    this->setMaxEp(120);
    this->setLvl(1);
    this->setMelee(60);
    this->setRanged(20);
    this->setArmour(5);
    std::cout << "SUPR-TP " << _name << " constructed!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & trap) {
    *this = trap;
    std::cout << "SUPR-TP " << _name << " constructed!" << std::endl;
}

SuperTrap::~SuperTrap() {
    std::cout << "SUPR-TP " << _name << " destructed!" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & trap) {
    this->setName(trap._name);
    this->setHp(trap._hp);
    this->setMaxHp(trap._hpMax);
    this->setEp(trap._ep);
    this->setMaxEp(trap._epMax);
    this->setLvl(trap._lvl);
    this->setMelee(trap._melee);
    this->setRanged(trap._ranged);
    this->setArmour(trap._armour);
    return *this;
}