/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rect.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <pkolomiy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:51:00 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/11/04 16:51:00 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECT_HPP
#define RECT_HPP

class Rect
{
public:

    Rect();

    Rect(int maxx, int maxy);

    Rect(int x, int y, int maxx, int maxy);

    Rect(Rect const &src);

    ~Rect();

    Rect &operator=(Rect const &rhs);

    int _x;
    int _y;
    int _maxx;
    int _maxy;
};

#endif
