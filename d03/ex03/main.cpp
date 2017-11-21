/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:44:32 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    
    FragTrap frag = FragTrap("f");
    FragTrap frag1  = FragTrap("f1");
    ScavTrap scav;
    ClapTrap trap;
    NinjaTrap ninja = NinjaTrap("Vasya");
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(trap);
    ninja.ninjaShoebox(ninja);
    frag1 = frag;
    ninja.ninjaShoebox(frag1);
    return 0;
}