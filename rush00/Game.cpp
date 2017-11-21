/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:34:00 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 22:02:24 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

Game::Game(void) {
    _window = initscr();
    cbreak();
    noecho();
    keypad(_window, true);
    intrflush(_window, false);
    nodelay(_window, true);
    curs_set(0);
    timeout(0);
    wtimeout(_window, 0);
    start_color();
    clear();
    attron(A_BOLD);
    box(_window, 0, 0);
    attroff(A_BOLD);
    refresh();
}

Game::Game(Game const & game) {
    _window = game._window;
    cbreak();
    noecho();
    keypad(_window, true);
    nodelay(_window, true);
    curs_set(0);
    start_color();
    clear();
    attron(A_BOLD);
    box(_window, 0, 0);
    attroff(A_BOLD);
    refresh();
}

Game::~Game(void) {
    endwin();
}

WINDOW* Game::getWin(void) {
    return _window;
}

Game & Game::operator=(Game const & game) {
    this->_window = game._window;
    return *this;
}
