/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <pkolomiy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:03:00 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/11/04 16:03:00 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_HPP
# define OBJECT_HPP

#include "Vector.hpp"

class Object
{
public:
    Object();

    Object(int x, int y);

    ~Object();

    Object(Object const &src);

    Object &operator=(Object const &rhs);

    void update();

    int  _x;
    int  _y;
    bool _dead;
};

#endif
