/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:23:24 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 20:23:24 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

private:
	Weapon*      _weapon;
	std::string _name;

public:
	void    attack(void);
	void    setWeapon(Weapon & weapon);
	HumanB(std::string name);
};

#endif
