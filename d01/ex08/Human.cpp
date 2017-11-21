/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:59:24 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 12:59:24 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const &target) {
	std::cout << "Meele attack in " << target << std::endl;
}

void Human::rangedAttack(std::string const &target) {
	std::cout << "Ranged attack in " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
	std::cout << "Intimidating shoot in " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {

	typedef void (Human::*Ptr)(std::string const &target);

	std::string names[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	Ptr actions[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for(int i = 0; i < 3; i++) {
		if(names[i] == action_name)
			(this->*actions[i])(target);
	}
}