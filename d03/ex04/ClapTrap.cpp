/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 22:51:52 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 23:39:05 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <sstream>

/*
**          CONSTRUCTORS 
*/
ClapTrap::ClapTrap(void) {
    this->setName("Default");    
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(100);
    this->setMaxEp(100);
    this->setLvl(1);
    this->setMelee(100);
    this->setRanged(100);
    this->setArmour(50);
    std::cout << "CL4P-TP " << _name << " constructed!" << std::endl; 
}
ClapTrap::ClapTrap(std::string const name) {
    this->setName(name);
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(100);
    this->setMaxEp(100);
    this->setLvl(1);
    this->setMelee(100);
    this->setRanged(100);
    this->setArmour(50);
    std::cout << "CL4P-TP " << _name << " constructed!" << std::endl;    
}
ClapTrap::ClapTrap(ClapTrap const & trap) {
    *this = trap;
    std::cout << "CL4P-TP " << _name << " constructed!" << std::endl;
}
ClapTrap::~ClapTrap(void) {
    std::cout << "CL4P-TP " << _name << " destructed!" << std::endl;    
}
ClapTrap & ClapTrap::operator=(ClapTrap const & trap) {
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
void    ClapTrap::setName(std::string const name) {
    this->_name = name;
}
void    ClapTrap::setHp(unsigned int const value) {
    this->_hp = value;
}
void    ClapTrap::setMaxHp(unsigned int const value) {
    this->_hpMax = value;
}
void    ClapTrap::setEp(unsigned int const value) {
    this->_ep = value;
}
void    ClapTrap::setMaxEp(unsigned int const value) {
    this->_epMax = value;
}
void    ClapTrap::setLvl(unsigned int const value) {
    this->_lvl = value;
}
void    ClapTrap::setMelee(unsigned int const value) {
    this->_melee = value;
}
void    ClapTrap::setRanged(unsigned int const value) {
    this->_ranged = value;
}
void    ClapTrap::setArmour(unsigned int const value) {
    this->_armour = value;
}

/*
**          GETTERS 
*/
std::string     ClapTrap::getName(void){
    return this->_name;
}
unsigned int    ClapTrap::getHp(void) {
    return this->_hp;
}
unsigned int    ClapTrap::getMaxHp(void) {
    return this->_hpMax;
}
unsigned int    ClapTrap::getEp(void) {
    return this->_ep;
}
unsigned int    ClapTrap::getMaxEp(void) {
    return this->_epMax;
}
unsigned int    ClapTrap::getLvl(void) {
    return this->_lvl;
}
unsigned int    ClapTrap::getMelee(void) {
    return this->_melee;
}
unsigned int    ClapTrap::getRanged(void) {
    return this->_ranged;
}
unsigned int    ClapTrap::getArmour(void) {
    return this->_armour;
}


/*
**          ATTACK 
*/
void    ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "CL4P-TP " << this->getName() << " attacks " << target;
    std::cout << " at range, causing " << this->getRanged() << " points of damage !" << std::endl;
}

void    ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "CL4P-TP " << this->getName() << " attacks " << target;
    std::cout << " at melee, causing " << this->getMelee() << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= _hp || amount >= _hpMax) {
        this->setHp(0);
        std::cout << "CL4P-TP " << _name << " take a damage incompatible with life and die! :( [RIP]" << std::endl;
    }
    else if (_hp == 0) {
        std::cout << "CL4P-TP " << _name << " is die! He cannot take damage. :( [RIP]" << std::endl;
    } 
    else if (amount <= _armour){
        std::cout << "CL4P-TP " << _name << " untouchable! :)" << std::endl;        
    }
    else {
        this->setHp(_hp - (amount - _armour));
        std::cout << "CL4P-TP " << _name << " take a " << amount - _armour << " damage." << std::endl;        
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (amount >= _hpMax || (amount + _hp) > _hpMax) {
        setHp(_hpMax);
        std::cout << "CL4P-TP " << _name << " take a 100% hp." << std::endl;        
    }
    else {
        setHp(_hp + amount);
        std::cout << "CL4P-TP " << _name << " repaired on " << amount << " hp." << std::endl;        
    }
}