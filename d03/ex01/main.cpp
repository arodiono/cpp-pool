/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/02 22:18:44 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
    
    ScavTrap vasya = ScavTrap("Vasya");
    ScavTrap petya = ScavTrap("Petya");
    
    vasya.challengeNewcomer();
    petya.challengeNewcomer();
    
    return 0;
}