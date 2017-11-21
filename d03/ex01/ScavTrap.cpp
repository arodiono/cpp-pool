/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:10:03 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:25:26 by arodiono         ###   ########.fr       */
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
    std::cout << "SC4G-TP " << _name << " constructed! :)" << std::endl;
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

/*
**          SETTERS 
*/
void    ScavTrap::setName(std::string const name) {
    this->_name = name;
}
void    ScavTrap::setHp(unsigned int const value) {
    this->_hp = value;
}
void    ScavTrap::setMaxHp(unsigned int const value) {
    this->_hpMax = value;
}
void    ScavTrap::setEp(unsigned int const value) {
    this->_ep = value;
}
void    ScavTrap::setMaxEp(unsigned int const value) {
    this->_hpMax = value;
}
void    ScavTrap::setLvl(unsigned int const value) {
    this->_lvl = value;
}
void    ScavTrap::setMelee(unsigned int const value) {
    this->_melee = value;
}
void    ScavTrap::setRanged(unsigned int const value) {
    this->_ranged = value;
}
void    ScavTrap::setArmour(unsigned int const value) {
    this->_armour = value;
}

/*
**          GETTERS 
*/
std::string     ScavTrap::getName(void){
    return this->_name;
}
unsigned int    ScavTrap::getHp(void) {
    return this->_hp;
}
unsigned int    ScavTrap::getMaxHp(void) {
    return this->_hpMax;
}
unsigned int    ScavTrap::getEp(void) {
    return this->_ep;
}
unsigned int    ScavTrap::getMaxEp(void) {
    return this->_epMax;
}
unsigned int    ScavTrap::getLvl(void) {
    return this->_lvl;
}
unsigned int    ScavTrap::getMelee(void) {
    return this->_melee;
}
unsigned int    ScavTrap::getRanged(void) {
    return this->_ranged;
}
unsigned int    ScavTrap::getArmour(void) {
    return this->_armour;
}


/*
**          ATTACK 
*/
void    ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "SC4G-TP " << this->getName() << " attacks " << target;
    std::cout << " at range, causing " << this->getRanged() << " points of damage !" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "SC4G-TP " << this->getName() << " attacks " << target;
    std::cout << " at melee, causing " << this->getMelee() << " points of damage !" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount) {
    if (amount >= _hp || amount >= _hpMax) {
        this->setHp(0);
        std::cout << "SC4G-TP " << _name << " take a damage incompatible with life and die! :( [RIP]" << std::endl;
    }
    else if (_hp == 0) {
        std::cout << "SC4G-TP " << _name << " is die! He cannot take damage. :( [RIP]" << std::endl;
    } 
    else if (amount <= _armour){
        std::cout << "SC4G-TP " << _name << " untouchable! :)" << std::endl;        
    }
    else {
        this->setHp(_hp - (amount - _armour));
        std::cout << "SC4G-TP " << _name << " take a " << amount - _armour << " damage." << std::endl;        
    }
}

void    ScavTrap::beRepaired(unsigned int amount) {
    if (amount >= _hpMax || (amount + _hp) > _hpMax) {
        setHp(_hpMax);
        std::cout << "SC4G-TP " << _name << " take a 100% hp." << std::endl;        
    }
    else {
        setHp(_hp + amount);
        std::cout << "SC4G-TP " << _name << " repaired on " << amount << " hp." << std::endl;        
    }
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