/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:04:34 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/30 14:04:34 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook() {
}

Phonebook::~Phonebook() {

}

void    Phonebook::add(void)
{
	std::cout << "\e[1mEnter first name\e[0m" << std::endl;
	std::getline (std::cin, this->first_name);
	std::cout << "\e[1mEnter last name\e[0m" << std::endl;
	std::getline (std::cin, this->last_name);
	std::cout << "\e[1mEnter nickname\e[0m" << std::endl;
	std::getline (std::cin, this->nickname);
	std::cout << "\e[1mEnter login\e[0m" << std::endl;
	std::getline (std::cin, this->login);
	std::cout << "\e[1mEnter postal address\e[0m" << std::endl;
	std::getline (std::cin, this->postal_address);
	std::cout << "\e[1mEnter email address\e[0m" << std::endl;
	std::getline (std::cin, this->email_address);
	std::cout << "\e[1mEnter phone number\e[0m" << std::endl;
	std::getline (std::cin, this->phone_number);
	std::cout << "\e[1mEnter birthday date\e[0m" << std::endl;
	std::getline (std::cin, this->birthday_date);
	std::cout << "\e[1mEnter favorite meal\e[0m" << std::endl;
	std::getline (std::cin, this->favorite_meal);
	std::cout << "\e[1mEnter underwear color\e[0m" << std::endl;
	std::getline (std::cin, this->underwear_color);
	std::cout << "\e[1mEnter darkest secret\e[0m" << std::endl;
	std::getline (std::cin, this->darkest_secret);
	std::cout << "\e[34m[INFO]\e[0m \e[1mContact successfully added\e[0m" << std::endl;
}

void    Phonebook::search(void)
{
	std::string id;
	this->render(this->first_name);
	this->render(this->last_name);
	this->render(this->nickname);
	std::cout << std::endl;
}

void    Phonebook::render(std::string value)
{
	if (value.length() > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout << value[i];
		}
		std::cout << ".|";
	} else {
		std::cout << std::setw(10) << value << '|';
	}
}

void    Phonebook::print()
{
	std::cout << "First name:\t" << this->first_name << std::endl;
	std::cout << "Last name:\t" << this->last_name << std::endl;
	std::cout << "Nickname:\t" << this->nickname << std::endl;
	std::cout << "Login:\t\t" << this->login << std::endl;
	std::cout << "Postal address:\t" << this->postal_address << std::endl;
	std::cout << "Email address:\t" << this->email_address << std::endl;
	std::cout << "Phone number:\t" << this->phone_number << std::endl;
	std::cout << "Birthday date:\t" << this->birthday_date << std::endl;
	std::cout << "Favorite meal:\t" << this->favorite_meal << std::endl;
	std::cout << "Underwear color:" << this->underwear_color << std::endl;
	std::cout << "Darkest secret:\t" << this->darkest_secret << std::endl;
}