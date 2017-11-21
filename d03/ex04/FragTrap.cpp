/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:10:03 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:22:31 by arodiono         ###   ########.fr       */
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