/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Field.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:15:00 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/11/04 20:54:34 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "Field.hpp"
#include <zconf.h>

Field::Field()
{
    getmaxyx(_window, _field._maxy, _field._maxx);
    _field._x = 0;
    _field._y = 0;
    _object = new Object[_field._maxy];
}

Field::Field(Field const &src)
{
    *this = src;
}

Field::~Field()
{
    delete[] _object;
}

Field &Field::operator=(Field const &rhs)
{
    _object = rhs._object;
    _field  = rhs._field;
    return *this;
}

void Field::setBounds(const Rect &bounds)
{
    _field = bounds;
}

void Field::update()
{
    bool end = false;

    for (int i = 0; i < _field._maxy - 2 && !end; i++)
    {
        _object[i]._x =
        (end = _object[i]._y < 0) || (_object[i]._y >= _field._maxy - 2) ?
        (rand() % _field._maxx) : _object[i]._x;
        _object[i]._y = _object[i]._y >= _field._maxy - 2 ? 0 : _object[i]._y + 1;
    }
}

void Field::erase(int i)
{
    _object[i]._dead = true;
}

Object *Field::getData() const
{
    return _object;
}

int Field::getWidth() const
{
    return _field._maxy;
}

int Field::getHeight() const
{
    return _field._maxx;
}
