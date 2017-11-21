/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:46:52 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 13:46:52 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;
	Zombie* zombie[5];
	for (int i = 0; i < 5; i++) { zombie[i] = event.randomChump(); }
	for (int i = 0; i < 5; i++) { delete zombie[i]; }
	return 0;
}