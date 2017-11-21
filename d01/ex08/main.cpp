/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:59:56 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 12:59:56 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void) {

	Human human;
	human.action("meleeAttack", "Petya");
	human.action("rangedAttack", "Vasya");
	human.action("intimidatingShout", "Vanya");

	return 0;
}
