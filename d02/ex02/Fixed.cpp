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
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fix) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::Fixed(const int value) {
//	std::cout << "Int constructor called" << std::endl;
	this->_value = value << 8;
}

Fixed::Fixed(const float value) {
//	std::cout << "Float constructor called" << std::endl;
	this->_value = std::roundf(value * 256.0f);
}

bool Fixed::operator<(Fixed const &fix) {
	if (this->_value < fix._value) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator>(Fixed const &fix) {
	if (this->_value > fix._value) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator<=(Fixed const &fix) {
	if (this->_value <= fix._value) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator>=(Fixed const &fix) {
	if (this->_value >= fix._value) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator==(Fixed const &fix) {
	if (this->_value == fix._value) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator!=(Fixed const &fix) {
	if (this->_value != fix._value) {
		return true;
	} else {
		return false;
	}
}

Fixed Fixed::operator+(Fixed const &fix) {
	Fixed tmp;
	tmp._value = this->_value + fix._value;
	return tmp;
}

Fixed Fixed::operator-(Fixed const &fix) {
	Fixed tmp;
	tmp._value = this->_value - fix._value;
	return tmp;
}

Fixed Fixed::operator*(Fixed const &fix) {
	Fixed tmp;
	tmp._value = (this->_value * fix._value) >> 8;
	return tmp;
}

Fixed Fixed::operator/(Fixed const &fix) {
	Fixed tmp;
	tmp._value = (this->_value << 8) / fix._value;
	return tmp;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed& Fixed::operator--(int) {
	this->_value--;
	return *this;
}

Fixed& Fixed::operator++(void) {
	++this->_value;
	return *this;
}

Fixed& Fixed::operator--(void) {
	--this->_value;
	return *this;
}

Fixed& Fixed::operator=(Fixed const & fix) {
//	std::cout << "Assignation operator called" << std::endl;
	this->_value = fix.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fix) {
	o << fix.toFloat();
	return o;
}

Fixed& Fixed::min(Fixed &ref1, Fixed &ref2) {
	return ref1._value < ref2._value ? ref1 : ref2;
}

Fixed& Fixed::max(Fixed &ref1, Fixed &ref2) {
	return ref1._value > ref2._value ? ref1 : ref2;
}

Fixed const &Fixed::min(Fixed const &ref1, Fixed const &ref2) {
	return ref1._value < ref2._value ? ref1 : ref2;
}

Fixed const &Fixed::max(Fixed const &ref1, Fixed const &ref2) {
	return ref1._value > ref2._value ? ref1 : ref2;
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
	return static_cast<int>(this->_value >> 8);
}