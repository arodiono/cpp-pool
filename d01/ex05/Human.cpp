/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:45:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 17:45:49 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <sstream>

Human::Human() : brain(){}

Brain &Human::getBrain() {
	return (const_cast<Brain&>(brain));
}

std::string Human::identify() {
	return (const_cast<Brain&>(brain)).identify();
}