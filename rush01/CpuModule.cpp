/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:46:09 by dzui              #+#    #+#             */
/*   Updated: 2017/11/11 16:46:12 by dzui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuModule.hpp"

CpuModule::CpuModule()
{
	for (int i = 0; i < 3; i++)
		load[i] = 0;
	info = "";
	loadUsr = new std::vector<int>;
}

CpuModule::~CpuModule()
{

}

CpuModule::CpuModule(const CpuModule &cm)
{
	this->info = cm.info;
	for (int i = 0; i < 3; i++)
		this->load[i] = cm.load[i];
}

CpuModule	&CpuModule::operator=(const CpuModule &cm)
{
	this->info = cm.info;
	for (int i = 0; i < 3; i++)
		this->load[i] = cm.load[i];
	return (*this);
}

void	CpuModule::parseInfo()
{
	std::string temp;
	std::string temp_info;
	std::string token;
	size_t 		pos;
	int 		i;

	pos = 0;
	temp = "";
	if (info == "")
	{
		pipe = popen("system_profiler -detailLevel full SPHardwareDataType", "r");
		while (!feof(pipe))
		{
			if (fgets(buff, BUFF_SIZE, pipe) != NULL)
				info += buff;
		}
		pclose(pipe);
	}
	pipe = popen("top -l 1 | grep \"CPU usage\"", "r");
	while (!feof(pipe))
	{
		if (fgets(buff, BUFF_SIZE, pipe) != NULL)
			temp += buff;
	}
	pclose(pipe);
	i = 0;
	while ((pos = temp.find(' ')) != std::string::npos)
	{
	    token = temp.substr(0, pos);
	    if (token.find('%') != std::string::npos)
	    {
	    	token[token.length() - 1] = '\0';
	    	load[i] = stof(token);
	    	i++;
	    }
	    temp.erase(0, pos + 1);
	}
	if (loadUsr->size() == 60)
	{
		loadUsr->pop_back();
	}
	loadUsr->insert(loadUsr->begin(), load[0] + load[1]);
}

float	CpuModule::getLoadUsr() const
{
	return (load[0]);
}

float	CpuModule::getLoadSys() const
{
	return (load[1]);
}

float	CpuModule::getLoadIdl() const
{
	return (load[2]);
}

std::vector<int> *CpuModule::getLoadUsrArr()
{
	return loadUsr;
}

sf::VertexArray CpuModule::render(std::size_t i)
{
	int h = 200;
	int x = 600;
	int y = 400;

	int posX = x - (i * 5);
	int posY = y;

	int res = (*loadUsr)[i];
	sf::VertexArray lines(sf::Quads, 4);
	lines.append(sf::Vertex(sf::Vector2f(posX, posY), sf::Color::Color(70, 130, 180)));
	lines.append(sf::Vertex(sf::Vector2f(posX, posY - h / 2 + res), sf::Color::Color(0, 191, 255)));
	lines.append(sf::Vertex(sf::Vector2f(posX - 5, posY - h / 2 + res), sf::Color::Color(0, 191, 255)));
	lines.append(sf::Vertex(sf::Vector2f(posX - 5, posY), sf::Color::Color(70, 130, 180)));

	return lines;
}
