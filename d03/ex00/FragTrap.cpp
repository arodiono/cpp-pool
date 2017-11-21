/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:10:03 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:21:30 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <sstream>

/*
**          CONSTRUCTORS 
*/
FragTrap::FragTrap(void) {
    this->setName("Default");    
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(100);
    this->setMaxEp(100);
    this->setLvl(1);
    this->setMelee(30);
    this->setRanged(20);
    this->setArmour(5);
    std::cout << "FR4G-TP " << _name << " constructed!" << std::endl; 
}
FragTrap::FragTrap(std::string const name) {
    this->setName(name);
    this->setHp(100);
    this->setMaxHp(100);
    this->setEp(100);
    this->setMaxEp(100);
    this->setLvl(1);
    this->setMelee(30);
    this->setRanged(20);
    this->setArmour(5);
    std::cout << "FR4G-TP " << _name << " constructed!" << std::endl;    
}
FragTrap::FragTrap(FragTrap const & trap) {
    *this = trap;
    std::cout << "FR4G-TP " << _name << " constructed!" << std::endl;
}
FragTrap::~FragTrap(void) {
    std::cout << "FR4G-TP " << _name << " destructed!" << std::endl;    
}
FragTrap & FragTrap::operator=(FragTrap const & trap) {
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
void    FragTrap::setName(std::string const name) {
    this->_name = name;
}
void    FragTrap::setHp(unsigned int const value) {
    this->_hp = value;
}
void    FragTrap::setMaxHp(unsigned int const value) {
    this->_hpMax = value;
}
void    FragTrap::setEp(unsigned int const value) {
    this->_ep = value;
}
void    FragTrap::setMaxEp(unsigned int const value) {
    this->_hpMax = value;
}
void    FragTrap::setLvl(unsigned int const value) {
    this->_lvl = value;
}
void    FragTrap::setMelee(unsigned int const value) {
    this->_melee = value;
}
void    FragTrap::setRanged(unsigned int const value) {
    this->_ranged = value;
}
void    FragTrap::setArmour(unsigned int const value) {
    this->_armour = value;
}

/*
**          GETTERS 
*/
std::string     FragTrap::getName(void){
    return this->_name;
}
unsigned int    FragTrap::getHp(void) {
    return this->_hp;
}
unsigned int    FragTrap::getMaxHp(void) {
    return this->_hpMax;
}
unsigned int    FragTrap::getEp(void) {
    return this->_ep;
}
unsigned int    FragTrap::getMaxEp(void) {
    return this->_epMax;
}
unsigned int    FragTrap::getLvl(void) {
    return this->_lvl;
}
unsigned int    FragTrap::getMelee(void) {
    return this->_melee;
}
unsigned int    FragTrap::getRanged(void) {
    return this->_ranged;
}
unsigned int    FragTrap::getArmour(void) {
    return this->_armour;
}


/*
**          ATTACK 
*/
void    FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target;
    std::cout << " at range, causing " << this->getRanged() << " points of damage !" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target;
    std::cout << " at melee, causing " << this->getMelee() << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount) {
    if (amount >= _hp || amount >= _hpMax) {
        this->setHp(0);
        std::cout << "FR4G-TP " << _name << " take a damage incompatible with life and die! :( [RIP]" << std::endl;
    }
    else if (_hp == 0) {
        std::cout << "FR4G-TP " << _name << " is die! He cannot take damage. :( [RIP]" << std::endl;
    } 
    else if (amount <= _armour){
        std::cout << "FR4G-TP " << _name << " untouchable! :)" << std::endl;        
    }
    else {
        this->setHp(_hp - (amount - _armour));
        std::cout << "FR4G-TP " << _name << " take a " << amount - _armour << " damage." << std::endl;        
    }
}

void    FragTrap::beRepaired(unsigned int amount) {
    if (amount >= _hpMax || (amount + _hp) > _hpMax) {
        setHp(_hpMax);
        std::cout << "FR4G-TP " << _name << " take a 100% hp." << std::endl;        
    }
    else {
        setHp(_hp + amount);
        std::cout << "FR4G-TP " << _name << " repaired on " << amount << " hp." << std::endl;        
    }
}
void    FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::stringstream earth, wind, fire, water, snow;
    earth << "FR4G-TP " << this->getName() << " attacks " << target << " at earth";
    wind << "FR4G-TP " << this->getName() << " attacks " << target << " at wind";
    fire << "FR4G-TP " << this->getName() << " attacks " << target << " at fire";
    water << "FR4G-TP " << this->getName() << " attacks " << target << " at water";
    snow << "FR4G-TP " << this->getName() << " attacks " << target << " at snow";
    std::string attacks[] = {earth.str(), wind.str(), fire.str(), water.str(), snow.str()};

    if (_ep < 25) {
        std::cout << "Not enoght energy! Need 25, but have " << _ep << " :(" << std::endl;
    } else {
        setEp(_ep - 25);
        std::cout << attacks[rand() % 5] << std::endl;
    }
}