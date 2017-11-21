/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rect.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <pkolomiy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:51:00 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/11/04 16:51:00 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rect.hpp"

Rect::Rect() : _x(0), _y(0), _maxx(0), _maxy(0)
{
}

Rect::Rect(int maxx, int maxy) : _x(0), _y(0), _maxx(maxx), _maxy(maxy)
{
}

Rect::Rect(int x, int y, int maxx, int maxy) :
_x(x), _y(y), _maxx(maxx), _maxy(maxy)
{
}

Rect::Rect(Rect const &src)
{
    *this = src;
}

Rect::~Rect()
{
}

Rect &Rect::operator=(Rect const &rhs)
{
    _x    = rhs._x;
    _y    = rhs._y;
    _maxx = rhs._maxx;
    _maxy = rhs._maxy;
    return *this;
}
