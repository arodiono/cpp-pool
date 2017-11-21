/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:57:25 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/08 21:28:16 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

std::string  hash() {
	std::string h = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	char hash[9];
	for	(int i = 0; i < 8; i++) {
		hash[i] = h[rand() % h.length()];
	}
	return static_cast<std::string>(hash);
}

void * serialize( void ) {
	Data *data = new Data;
	data->s1 = hash();
	data->s2 = hash();
	data->n = rand();
	return data;
}

Data * deserialize( void * raw ) {
	Data *data = reinterpret_cast<Data*>(raw);
	return data;
}

int	main() {
	srand(time(0));
	void *v = serialize();
	std::cout << v << std::endl;
	Data *data = deserialize(v);
	std::cout << data->s1 << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << data->n << std::endl;
}
