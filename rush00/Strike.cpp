/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Strike.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 22:57:52 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 23:02:37 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strike.hpp"

Strike::Strike () {
    _x = 0;
    _y = 0;
}

Strike::Strike (int x, int y) : _x(x), _y(y) {
}

Strike::Strike (Strike const & strike) {
    *this = strike;
}

Strike::~Strike () {
    
}

Strike & Strike::operator=(Strike const & strike) {
    _x = strike._x;
    _y = strike._y;
    return *this;
}