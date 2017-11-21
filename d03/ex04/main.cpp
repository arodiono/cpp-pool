/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 23:37:45 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void) {
    
    SuperTrap trap;
    std::cout << "Name: " << trap.getName() << std::endl;
    std::cout << "hp " << trap.getHp() << std::endl;
    std::cout << "max hp " << trap.getMaxHp() << std::endl;
    std::cout << "ep " << trap.getEp() << std::endl;
    std::cout << "max ep " << trap.getMaxEp() << std::endl;
    std::cout << "lvl " << trap.getLvl() << std::endl;    
    std::cout << "rang " << trap.getRanged() << std::endl;
    std::cout << "meele " << trap.getMelee() << std::endl;
    std::cout << "armour " << trap.getArmour() << std::endl;
    
    return 0;
}