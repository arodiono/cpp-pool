/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:12:12 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 14:12:12 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>

class Logger {

public:
	Logger();
	void        log(std::string const & dest, std::string const & message);
private:
	std::string _filename;
	std::string makeLogEntry(std::string const message);
	void        logToConsole(std::string const message);
	void        logToFile(std::string const message);
};

#endif