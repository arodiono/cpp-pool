/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:30:52 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 23:52:53 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include <ncurses.h>
# include <iostream>

class Game {

protected:
    WINDOW* _window;

public:
    void    run(void);
    Game();
    Game(Game const & game);
    virtual ~Game(void);

    WINDOW* getWin(void);

    Game & operator=(Game const & game);
};

#endif
