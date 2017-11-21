/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/02 21:46:51 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    
    FragTrap vasya = FragTrap("Vasya");
    FragTrap petya = FragTrap("Petya");
    
    vasya.meleeAttack("Petya");
    petya.takeDamage(vasya.getMelee());

    petya.rangedAttack("Vasya");
    vasya.takeDamage(petya.getRanged());
    petya.rangedAttack("Vasya");
    vasya.takeDamage(petya.getRanged());
    petya.rangedAttack("Vasya");
    vasya.takeDamage(petya.getRanged());
    petya.rangedAttack("Vasya");
    vasya.takeDamage(petya.getRanged());
    petya.rangedAttack("Vasya");
    vasya.takeDamage(petya.getRanged());
    petya.rangedAttack("Vasya");
    vasya.takeDamage(petya.getRanged());
    petya.rangedAttack("Vasya");    
    vasya.takeDamage(petya.getRanged());
    
    vasya.vaulthunter_dot_exe("Petya");
    petya.vaulthunter_dot_exe("Vasya");
    
    return 0;
}