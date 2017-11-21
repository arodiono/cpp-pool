/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:10:03 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:35:33 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <sstream>

/*
**          CONSTRUCTORS 
*/
ScavTrap::ScavTrap(void) {
    this->setName("Default");    
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(50);
    this->setMaxEp(50);
    this->setLvl(1);
    this->setMelee(20);
    this->setRanged(15);
    this->setArmour(3);
    std::cout << "SC4G-TP " << _name << " constructed! :)" << std::endl; 
}
ScavTrap::ScavTrap(std::string const name) {
    this->setName(name);
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(50);
    this->setMaxEp(50);
    this->setLvl(1);
    this->setMelee(20);
    this->setRanged(15);
    this->setArmour(3);
    std::cout << "SC4G-TP " << _name << " constructed! :)" << std::endl;    
}
ScavTrap::ScavTrap(ScavTrap const & trap) {
    *this = trap;
    std::cout << "SC4G-TP " << _name << " constructed!" << std::endl;
}
ScavTrap::~ScavTrap(void) {
    std::cout << "SC4G-TP " << _name << " destructed! :(" << std::endl;    
}
ScavTrap & ScavTrap::operator=(ScavTrap const & trap) {
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

void    ScavTrap::challengeNewcomer(void) {
    std::string challenge[] = {
    "Lower corner of screen has the words \"Etch-a-sketch\" on it.",
    "It's celebrity spokesman is that \"Hey Vern!\" guy.",
    "In order to start it you need some jumper cables and a friend's car.",
    "It's slogan is \"Pentium: redefining mathematics\".",
    "The \"quick reference\" manual is 120 pages long.",
    };
    std::cout << challenge[rand() % 5] << std::endl;
}