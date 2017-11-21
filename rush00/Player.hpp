/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:46:01 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 23:40:56 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "Game.hpp"
# include "Vector.hpp"
# include "Strike.hpp"

typedef struct s_strike {
    int x;
    int y;
    char icon;
    s_strike *next;
} t_strike;

class Player : public Game {

public:
    t_strike *_strike;
    Vector  _position;
    char    _icon;
    int     _score;
    int     _bestScore;
    int     _hp;

    Player();
    Player(Player const & player);
    virtual ~Player();

    int getPosX(void);
    int getPosY(void);
    void setPosX(int x);
    void setPosY(int x);
    char getIcon();
    void strike(int x, int y);
    Player & operator=(Player const & player);
};

#endif
