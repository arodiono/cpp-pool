/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:46:25 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 13:46:25 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

private:
	Zombie*     _zombie;
	std::string _type;

public:
	Zombie* newZombie(std::string name);
	void    setZombieType(std::string type);
	Zombie* randomChump(void);
};

#endif
