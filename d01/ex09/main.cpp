/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:12:33 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 14:12:33 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) {
	Logger logger;
	logger.log("logToFile", "test1");
	logger.log("logToConsole", "test1");
	logger.log("logToFile", "test2");
	logger.log("logToConsole", "test2");
	logger.log("logToFile", "test3");
	logger.log("logToConsole", "test3");
	return 0;
}