/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <pkolomiy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:04:00 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/11/04 16:04:00 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object.hpp"

Object::Object()
{
    _x = -1;
    _y = -1;
    _dead = false;
}

Object::Object(int x, int y)
{
    _x = x;
    _y = y;
    _dead = false;
}

Object::~Object()
{

}

Object& Object::operator=(Object const &rhs)
{
    _x = rhs._x;
    _y = rhs._y;
    _dead = rhs._dead;
    return *this;
}

void Object::update()
{
    _y++;
}
