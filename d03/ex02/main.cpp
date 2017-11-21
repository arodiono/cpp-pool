/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:31:08 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
    
    ScavTrap vasya = ScavTrap("Vasya");
    ScavTrap *petya = new ScavTrap("Petya");
    delete petya;
    return 0;
}