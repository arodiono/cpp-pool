/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:57:22 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/30 12:57:22 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"


int main(void)
{
	Phonebook book[8];
	std::string command;
	int count = 0;
	int id;

	do {
		std::cout << "\e[1mEnter command (ADD, SEARCH or EXIT)\e[0m" << std::endl;
		std::getline (std::cin, command);
		if (command == "ADD") {
			if (count < 8) {
				book[count].add();
				count++;
			} else {
				std::cout << "\e[93m[WARNING]\e[0m \e[1mPhonebook is full\e[0m" << std::endl;
			}
		} else if (command == "SEARCH") {
			if (count == 0) {
				std::cout << "\e[34m[INFO]\e[0m \e[1mPhonebook is empty\e[0m" << std::endl;
			} else {
				std::cout << std::setw(10) << "ID" << "|";
				std::cout << std::setw(10) << "FIRSTNAME" << "|";
				std::cout << std::setw(10) << "LASTNAME" << "|";
				std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;

				for (int i = 0; i < count; i++) {
					std::cout << std::setw(10) << i + 1 << "|";
					book[i].search();
				}
				while(1) {
					std::cout << "\e[1mEnter id\e[0m" << std::endl;
					std::getline (std::cin, command);
					id = atoi(command.c_str());
					if (id > 0 && id <= count) {
						book[id - 1].print();
						break;
					} else {
						std::cout << "\e[31m[ERROR]\e[0m \e[1mWrong id\e[0m" << std::endl;
					}
				}
			}
		} else if (command == "EXIT") {
			return 0;
		} else {
			std::cout << "\e[31m[ERROR]\e[0m \e[1mWrong command\e[0m" << std::endl;
		}
	}
	while (command != "EXIT");
}