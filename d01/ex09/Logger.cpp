/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:12:24 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 14:12:24 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

Logger::Logger() {
	this->_filename = "logger.log";
}

void Logger::logToConsole(std::string const message) {
	std::cout << message << std::endl;
}

void Logger::logToFile(std::string const message) {
	std::ofstream file(this->_filename, std::ofstream::app);
	file << message << std::endl;
	file.close();
}

std::string Logger::makeLogEntry(std::string const message) {
	time_t		cur_time = time(NULL);
	struct tm	*local_t = localtime(&cur_time);
	char		time_dis[32];
	std::stringstream res;

	strftime(time_dis, sizeof(time_dis), "[%Y%d%m_%H%M%S] ", local_t);
	res << time_dis << " " << message;
	return res.str();
}

void    Logger::log(std::string const & dest, std::string const & message) {

	typedef void (Logger::*Dest)(std::string message);

	std::string names[] = {"logToConsole", "logToFile"};

	Dest actions[] = {&Logger::logToConsole, &Logger::logToFile};

	for(int i = 0; i < 2; i++) {
		if(names[i] == dest)
			(this->*actions[i])(this->makeLogEntry(message));
	}
}