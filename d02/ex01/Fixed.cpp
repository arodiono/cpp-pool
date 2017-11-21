/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:11:27 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 17:11:27 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * 256;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = std::roundf(value * 256.0f);
}

Fixed& Fixed::operator=(Fixed const & fix) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fix.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fix) {
	o << fix.toFloat();
	return o;
}

int Fixed::getRawBits() const {
	return this->_value;
}

void Fixed::setRawBits(int const value) {
	this->_value = value;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->_value / 256.0f);
}

int Fixed::toInt() const {
	return static_cast<int>(this->_value / 256);
}