/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:58 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:22:41 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

private:
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
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(FragTrap const & trap);
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & trap);
    
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
    void    vaulthunter_dot_exe(std::string const & target);
};

#endif