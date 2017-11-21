/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 22:51:56 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:26:11 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:
    std::string     _name;
    unsigned int    _hp;
    unsigned int    _hpMax;
    unsigned int    _ep;
    unsigned int    _epMax;
    unsigned int    _lvl; 
    unsigned int    _melee;
    unsigned int    _ranged;
    unsigned int    _armour;

public:
    ClapTrap(void);
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap const & trap);
    virtual ~ClapTrap(void);

    ClapTrap & operator=(ClapTrap const & trap);

    void    setName(std::string const name);
    void    setHp(unsigned int const value);
    void    setMaxHp(unsigned int const value);
    void    setEp(unsigned int const value);
    void    setMaxEp(unsigned int const value);
    void    setLvl(unsigned int const value);
    void    setMelee(unsigned int const value);
    void    setRanged(unsigned int const value);
    void    setArmour(unsigned int const value);
    
    std::string     getName(void);
    unsigned int    getHp(void);
    unsigned int    getMaxHp(void);
    unsigned int    getEp(void);
    unsigned int    getMaxEp(void);
    unsigned int    getLvl(void);
    unsigned int    getMelee(void);
    unsigned int    getRanged(void);
    unsigned int    getArmour(void);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};

#endif