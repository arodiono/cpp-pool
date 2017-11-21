/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 23:51:51 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:38:08 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <sstream>

/*
**          CONSTRUCTORS 
*/
NinjaTrap::NinjaTrap(void) {
    this->setName("Default");    
    this->setHp(60);
    this->setMaxHp(60);
    this->setEp(120);
    this->setMaxEp(120);
    this->setLvl(1);
    this->setMelee(60);
    this->setRanged(5);
    this->setArmour(0);
    std::cout << "NINJ-TP " << _name << " constructed!" << std::endl; 
}
NinjaTrap::NinjaTrap(std::string const name) {
    this->setName(name);
    this->setHp(60);
    this->setMaxHp(60);
    this->setEp(120);
    this->setMaxEp(120);
    this->setLvl(1);
    this->setMelee(60);
    this->setRanged(5);
    this->setArmour(0);
    std::cout << "NINJ-TP " << _name << " constructed!" << std::endl;    
}
NinjaTrap::~NinjaTrap(void) {
    std::cout << "NINJ-TP " << _name << " destructed!" << std::endl;    
}
NinjaTrap & NinjaTrap::operator=(NinjaTrap const & trap) {
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

void    NinjaTrap::ninjaShoebox(ClapTrap & trap) {
    std::cout << "[Clap] " << trap.getName() << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap & trap) {
    std::cout << "[Frag] " << trap.getName() << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap & trap) {
    std::cout << "[Scav] " << trap.getName() << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap & trap) {
    std::cout << "[Ninja] " << trap.getName() << std::endl;
}