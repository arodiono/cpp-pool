/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:15:59 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/05 00:43:14 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <unistd.h>
#include "Player.hpp"
#include "Field.hpp"

#define KEY_ESC 27
#define KEY_SPACE 32

bool game(Player &player, Field &stars)
{
    bool exit = false;
    int i = 1200;
    int key;

    while (true)
    {
        key = wgetch(player.getWin());
        key = tolower(key);
        
        switch (key)
        {
        case KEY_SPACE:
            player.strike(player._position._x, player._position._y);
            break;
        case KEY_ESC:
            exit = true;
            break;
        case 'w':
            player._position._x = player._position._x <= 0 ? player._position._x : player._position._x - 1;
            break;
        case 's':
            player._position._x =
                player._position._x >= stars.getWidth() - 3 ? player._position._x : player._position._x + 1;
            break;
        case 'a':
            player._position._y = player._position._y <= 0 ? player._position._y : player._position._y - 1;
            break;
        case 'd':
            player._position._y =
                player._position._y >= stars.getHeight() - 2 ? player._position._y : player._position._y + 1;
            break;
        default:
            break;
        }
        werase(player.getWin());

        t_strike *tmp = player._strike;
        Object *arr = stars.getData();
        if (i % 2 == 0)
            stars.update();

        for (int j = 0; j < stars.getWidth() - 2; j++)
        {
            if ((player._position._y == arr[j]._x || player._position._y == arr[j]._x + 1 || player._position._y == arr[j]._x + 2) &&
                player._position._x == arr[j]._y)
            {
                arr[j]._y = -1;
                player._hp -= 25;
                if (!player._hp)
                    return true;
            }
            while (tmp)
            {
                if ((tmp->y == arr[j]._x || tmp->y == arr[j]._x + 1 || tmp->y == arr[j]._x + 2) &&
                    tmp->x == arr[j]._y)
                {
                    arr[j]._y = tmp->x = -1;
                    player._score += 10;
                }
                tmp = tmp->next;
            }
            tmp = player._strike;
            //            mvaddwstr(0, 0, wstr);
            //            mvaddstr(arr[j]._y, arr[j]._x, "☢");
            mvprintw(arr[j]._y, arr[j]._x, "👾");
            //            mvaddch(arr[j]._y, arr[j]._x, 'v');
        }
        for (int k = 0; k < stars.getHeight(); k++)
        {
            mvaddch(stars.getWidth() - 2, k, '_');
        }
        mvprintw(stars.getWidth() - 1, 7,
                 (std::to_string(player._score)).c_str());
        mvprintw(stars.getWidth() - 1, 0, "Score:");
        mvprintw(stars.getWidth() - 1, (stars.getHeight() / 2) - 12,
                 "Best score:");
        mvprintw(stars.getWidth() - 1, (stars.getHeight() / 2),
                 (std::to_string(player._bestScore)).c_str());
        mvprintw(stars.getWidth() - 1, stars.getHeight() - 7, "HP:");
        mvprintw(stars.getWidth() - 1, stars.getHeight() - 3,
                 (std::to_string(player._hp)).c_str());
        tmp = player._strike;
        while (tmp)
        {
            tmp->x--;
            //            mvprintw(tmp->x, tmp->y, "🔺");
            mvaddch(tmp->x, tmp->y, tmp->icon);
            tmp = tmp->next;
        }
        mvprintw(player._position._x, player._position._y, "⑃");

        //        mvaddch(player._position._x, player._position._y, player.getIcon());
        usleep(1000000 / 30);
        if (exit)
            return (false);
        i++;
        refresh();
    }
}

int main()
{
    setlocale(LC_ALL, "");
    Player player;
    Field stars;
    bool status = true;
    int key;
    player.setPosX(stars.getWidth() - 3);
    player.setPosY((stars.getHeight() / 2) - 5);

    while (status)
    {
        status = game(player, stars);
        werase(player.getWin());
        if (status)
        {
            mvprintw(stars.getWidth() / 2,
                     (stars.getHeight() / 2) - 11,
                     "Try again?");
            player._hp = 100;
            player._bestScore = player._score > player._bestScore ? player._score : player._bestScore;
            player._score = 0;
            player.setPosX(stars.getWidth() - 3);
            player.setPosY((stars.getHeight() / 2) - 5);
            Object *arr = stars.getData();
            for (int i = 0; i < stars.getWidth(); i++)
            {
                arr[i]._x = -1;
                arr[i]._y = -1;
            }
        }
        else
        {
            mvprintw(stars.getWidth() / 2,
                     (stars.getHeight() / 2) - 11,
                     "Continue?");
        }
        mvprintw((stars.getWidth() / 2) + 1,
                 (stars.getHeight() / 2) - 9,
                 "[y/n]");
        while (true)
        {
            key = wgetch(player.getWin());
            key = tolower(key);
            if (key == 'y' || key == 'n')
            {
                status = key == 'y';
                break;
            }
        }
    }

    return 0;
}
