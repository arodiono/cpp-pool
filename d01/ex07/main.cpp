/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:52:37 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 20:52:37 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {

	std::string filename;
	std::string output;
	std::string str1;
	std::string str2;
	std::string buffer;

	if (argc == 4) {
		filename    = argv[1];
		str1        = argv[2];
		str2        = argv[3];
		output      = filename + ".replace";

		std::ifstream file(filename);
		std::ofstream out(output);

		if (str1 == "") {
			std::cout << "\e[0;31m[ERROR]\e[0m First argument is empty" << std::endl;
			return 0;
		}
		if (file.is_open()) {
			while (std::getline (file, buffer))
			{
				size_t pos = 0;
				while ((pos = buffer.find(str1, pos)) != std::string::npos)
				{
					buffer.replace(pos, str1.length(), str2);
					pos += str2.length();
				}
				out << buffer << std::endl;
			}
			file.close();
		} else {
			std::cout << "\e[0;31m[ERROR]\e[0m Cannot open a file" << std::endl;
		}
	} else {
		std::cout << "\e[0;31m[ERROR]\e[0m Wrong parameters" << std::endl;
		std::cout << "\e[0;34mUsage:\e[0m ./replace [filename] [string] [string]" << std::endl;
	}
	return 0;
}