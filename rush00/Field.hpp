/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Field.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <pkolomiy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:15:00 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/11/04 16:15:00 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIELD_HPP
# define FIELD_HPP

#include "Rect.hpp"
#include "Game.hpp"
#include "Object.hpp"

class Field : public Game
{
public:

    Field();

    Field(Field const &src);

    ~Field();

    Field &operator=(Field const &rhs);

    void update();

    void erase(int i);

    Object *getData() const;

    void setBounds(const Rect &bounds);

    int getWidth() const;

    int getHeight() const;

private:
    Rect   _field;
    Object *_object;
};

#endif
