/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:23:37 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/12 23:25:29 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"
#include <SFML/Graphics.hpp>
#include "HostName.hpp"
#include "OsModule.hpp"
#include "TimeModule.hpp"
#include "CpuModule.hpp"
#include "DiskModule.hpp"
#include "MemoryModule.hpp"
#include "NetwModule.hpp"
#include <ctime>
#include <sstream>

Window::Window(){
}
Window::Window(sf::RenderWindow *win) : window(win) {
	font.loadFromFile("includes/fonts/helvetica.ttf");
	icon.loadFromFile("includes/icon.png");
	window->setIcon(512, 512, icon.getPixelsPtr());
}
Window::~Window() {}

void Window::run() {
	sf::Font font;
	font.loadFromFile("includes/fonts/helvetica.ttf");
	HostName hn;
	OsModule os;
	TimeModule tm;
	CpuModule cp;
	DiskModule dm;
	MemoryModule mm;
	NetwModule nm;

	sf::Texture texture;
	texture.loadFromFile("includes/cat.png");
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(800, 420));

	sf::RectangleShape header;
	header.setSize(sf::Vector2f(1300, 100));
	header.setOutlineThickness(10);
	header.setPosition(0, 0);

	sf::RectangleShape cpu;
	cpu.setSize(sf::Vector2f(500, 200));
	cpu.setOutlineThickness(10);
	cpu.setPosition(100, 200);

	sf::Text cpuText;
	cpuText.setString("CPU");
	cpuText.setPosition(115, 210);
	cpuText.setFont(font);
	cpuText.setFillColor(sf::Color::Black);
	cpuText.setCharacterSize(30);

	sf::Text cpuLoadSysText;
	cpuLoadSysText.setFont(font);
	cpuLoadSysText.setFillColor(sf::Color::Black);
	cpuLoadSysText.setCharacterSize(25);
	sf::Text cpuLoadUsrText;
	cpuLoadUsrText.setFont(font);
	cpuLoadUsrText.setFillColor(sf::Color::Black);
	cpuLoadUsrText.setCharacterSize(25);
	sf::Text cpuLoadIdlText;
	cpuLoadIdlText.setFont(font);
	cpuLoadIdlText.setFillColor(sf::Color::Black);
	cpuLoadIdlText.setCharacterSize(25);

	sf::RectangleShape ram;
	ram.setSize(sf::Vector2f(500, 200));
	ram.setOutlineThickness(10);
	ram.setPosition(700, 200);

	sf::Text ramText;
	ramText.setString("RAM");
	ramText.setPosition(715, 210);
	ramText.setFont(font);
	ramText.setFillColor(sf::Color::Black);
	ramText.setCharacterSize(30);

	sf::Text ramTotalText;
	ramTotalText.setFont(font);
	ramTotalText.setFillColor(sf::Color::Black);
	ramTotalText.setCharacterSize(25);
	sf::Text ramUsedText;
	ramUsedText.setFont(font);
	ramUsedText.setFillColor(sf::Color::Black);
	ramUsedText.setCharacterSize(25);
	sf::Text ramUnusedText;
	ramUnusedText.setFont(font);
	ramUnusedText.setFillColor(sf::Color::Black);
	ramUnusedText.setCharacterSize(25);

	sf::RectangleShape infoV;
	infoV.setSize(sf::Vector2f(500, 150));
	infoV.setOutlineThickness(10);
	infoV.setPosition(100, 500);

	sf::RectangleShape infoN;
	infoN.setSize(sf::Vector2f(1100, 200));
	infoN.setOutlineThickness(10);
	infoN.setPosition(100, 750);

	hn.parseInfo();
	sf::Text infoText(hn.getInfo(), font, 24);
	infoText.setFillColor(sf::Color::Black);
	infoText.setPosition(sf::Vector2f(700, 50));

	os.parseInfo();
	sf::Text osText(os.getInfo(), font, 30);
	osText.setFillColor(sf::Color::Black);
	osText.setPosition(sf::Vector2f(115, 520));

	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}
		window->clear(GRAY);
		window->draw(header);
		window->draw(sprite);
		window->draw(cpu);
		window->draw(ram);
		window->draw(infoV);
		window->draw(infoN);
		window->draw(infoText);
		window->draw(osText);
		tm.parseInfo();

		sf::Text timeText(tm.getInfo(), font, 24);
		timeText.setFillColor(sf::Color::Black);
		timeText.setPosition(sf::Vector2f(100, 50));

		window->draw(timeText);

		cp.parseInfo();

		std::stringstream cpuLoadSys;
		cpuLoadSys << "System:  ";
		cpuLoadSys << cp.getLoadSys();
		cpuLoadSysText.setString(cpuLoadSys.str());
		cpuLoadSysText.setPosition(115, 260);

		std::stringstream cpuLoadUsr;
		cpuLoadUsr << "User:      ";
		cpuLoadUsr << cp.getLoadUsr();
		cpuLoadUsrText.setString(cpuLoadUsr.str());
		cpuLoadUsrText.setPosition(115, 310);

		std::stringstream cpuLoadIdl;
		cpuLoadIdl << "Idle:        ";
		cpuLoadIdl << cp.getLoadIdl();
		cpuLoadIdlText.setString(cpuLoadIdl.str());
		cpuLoadIdlText.setPosition(115, 360);

		for (std::size_t i = 0; i < cp.getLoadUsrArr()->size(); i++)
		{
			window->draw(cp.render(i));
		}

		window->draw(cpuText);
		window->draw(cpuLoadUsrText);
		window->draw(cpuLoadSysText);
		window->draw(cpuLoadIdlText);

		mm.parseInfo();

		std::stringstream ramTotal;
		ramTotal << "Total:       ";
		ramTotal << mm.getTotal();
		ramTotalText.setString(ramTotal.str());
		ramTotalText.setPosition(715, 260);

		std::stringstream ramUsed;
		ramUsed << "Used:      ";
		ramUsed << mm.getUsed();
		ramUsedText.setString(ramUsed.str());
		ramUsedText.setPosition(715, 310);

		std::stringstream ramUnused;
		ramUnused << "Unused:  ";
		ramUnused << mm.getUnused();
		ramUnusedText.setString(ramUnused.str());
		ramUnusedText.setPosition(715, 360);

		for (std::size_t i = 0; i < mm.getUsedArr()->size(); i++)
		{
			window->draw(mm.render(i));
		}

		window->draw(ramText);
		window->draw(ramTotalText);
		window->draw(ramUsedText);
		window->draw(ramUnusedText);

		nm.parseInfo();
		sf::Text nmText(nm.getInfo(), font, 24);
		nmText.setFillColor(sf::Color::Black);
		nmText.setPosition(sf::Vector2f(115, 860));

		window->draw(nmText);

		dm.parseInfo();
		sf::Text diskText(dm.getInfo(), font, 30);
		diskText.setFillColor(sf::Color::Black);
		diskText.setPosition(sf::Vector2f(115, 800));

		window->draw(diskText);

		window->display();
		usleep(1000000);
	}
}
