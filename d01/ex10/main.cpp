/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 15:04:07 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 15:04:07 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::string     buffer;
	std::ifstream   file;

	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			file.open(argv[i]);
			if (file.good()) {
				while (std::getline(file, buffer)) {
					std::cout << buffer << std::endl;
				}
			} else {
				std::cout << "\e[0;31m[ERROR]\e[0m " << argv[i] << ": No such file or directory" << std::endl;
			}
			std::cout << std::endl;
			file.close();
		}
	} else if (argc == 1) {
		while (std::getline (std::cin, buffer)) {
			std::cout << buffer << std::endl;
		}
	} else {
		std::cout << "\e[0;31m[ERROR]\e[0m " << std::endl;
	}
	return 0;
}