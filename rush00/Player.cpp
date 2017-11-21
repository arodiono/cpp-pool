/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:48:20 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/05 00:43:33 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Strike.hpp"

Player::Player() {
    _position = Vector(0, 0);
    _icon = '^';
    // _strike = new t_strike;
    _strike = NULL;
    _score = 0;
    _bestScore = 0;
    _hp = 100;
}

Player::Player(Player const & player) {
    *this = player;
}

Player::~Player() {}

int Player::getPosX() {
    return _position._x;
}
int Player::getPosY() {
    return _position._y;
}
void Player::setPosX(int x) {
    _position._x = x;
}
void Player::setPosY(int y) {
    _position._y = y;
}
char Player::getIcon() {
    return _icon;
}

Player & Player::operator=(Player const & player) {
    _position = player._position;
    _icon = player._icon;
    return *this;
}

void    Player::strike(int x, int y) {
    t_strike *tmp = new t_strike;
    tmp->x = x;
    tmp->y = y;
    tmp->icon = '|';
    tmp->next = _strike;
    _strike = tmp;
}
