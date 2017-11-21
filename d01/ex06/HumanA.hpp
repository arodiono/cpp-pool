/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:02:13 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 20:02:13 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
	Weapon&      _weapon;
	std::string _name;

public:
	void    attack(void);
	HumanA(std::string name, Weapon& weapon);
};

#endif
