/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 12:09:39 by dzui              #+#    #+#             */
/*   Updated: 2017/11/12 12:09:40 by dzui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <SFML/Graphics.hpp>
#include "NcursesOut.hpp"
#include "Window.hpp"

int		main(int argc, char **argv)
{
	NcursesOut 	nc_out;
	std::string	inp;
	if (argc == 2)
	{
		inp = argv[1];
		if (inp == "-n")
			nc_out.drawStats();
		else if (inp == "-v")
		{
			sf::RenderWindow win(sf::VideoMode(1300, 1050), "ft_gkrellm", sf::Style::Titlebar | sf::Style::Close);
			Window window(&win);
			window.run();
		}
		else
		{
			std::cout << "Usage: -n for ncurses output, -v for visual output.\n";
			return (0);
		}

	}
	else
		std::cout << "Usage: -n for ncurses output, -v for visual output.\n";
	return (0);
}
