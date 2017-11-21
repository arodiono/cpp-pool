/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:14:49 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 14:23:30 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.hpp"

Vector::Vector() {
    _x = 0;
    _y = 0;
}

Vector::Vector(int x, int y) {
    _x = x;
    _y = y;
}

Vector::Vector(Vector const & vector) {
    *this = vector;
}

Vector::~Vector() {
    
}

Vector & Vector::operator=(Vector const & vector) {
    _x = vector._x;
    _y = vector._y;
    return *this;
}

Vector & Vector::operator+(Vector const & vector) {
    _x += vector._x;
    _y += vector._y;
    return *this;
}

Vector & Vector::operator-(Vector const & vector) {
    _x -= vector._x;
    _y -= vector._y;
    return *this;
}
Vector & Vector::operator*(Vector const & vector) {
    _x *= vector._x;
    _y *= vector._y;
    return *this;
}
Vector & Vector::operator/(Vector const & vector) {
    _x /= vector._x;
    _y /= vector._y;
    return *this;
} 
bool Vector::operator==(Vector const & vector) {
    if (_x == vector._x && _y == vector._y) {
        return true;
    } else {
        return false;
    }
}