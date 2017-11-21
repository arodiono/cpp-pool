/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:02:16 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/30 14:02:16 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_PISCINE_PHONEBOOK_HPP
#define CPP_PISCINE_PHONEBOOK_HPP

class Phonebook {

public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	Phonebook(void);
	~Phonebook(void);
	void    add(void);
	void    search(void);
	void    render(std::string value);
	void    print(void);
};

#endif