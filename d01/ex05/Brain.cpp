/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:46:16 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 17:46:16 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() {
	this->_address << this;
}

Brain::~Brain() {

}

std::string Brain::identify() {
	return this->_address.str();
}