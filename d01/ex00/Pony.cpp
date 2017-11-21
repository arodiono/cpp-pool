/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:10:57 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 12:57:44 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
	std::cout << "\e[0;32mPony " << this->_name << " is born ";
}
Pony::~Pony() {
	std::cout << "\e[0;31mPony " << this->_name << " is dieeeeeee\e[0m" << std::endl;
}