/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:12:36 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 14:55:43 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP


class Vector {
    
public:
    int _x;
    int _y;
    Vector();
    Vector(int x, int y);    
    Vector(Vector const & vector);
    ~Vector();
    
    Vector & operator=(Vector const & vector);
    Vector & operator+(Vector const & vector);
    Vector & operator-(Vector const & vector);
    Vector & operator*(Vector const & vector);
    Vector & operator/(Vector const & vector);    
    bool operator==(Vector const & vector);
};

#endif