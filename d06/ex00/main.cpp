/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:15:00 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 22:19:09 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>

void printChar(char c)
{
	std::cout << "char: ";
	if (isprint(c))
	{
		std::cout << "\'" << c << "\'" << std::endl;
	}
	else
	{
		std::cout << "Non displayable" << std::endl;
	}
}
void printInt(int i)
{
	std::cout << "int: ";
	std::cout << i << std::endl;
}
void printFloat(float f)
{
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << f << "f" << std::endl;
}
void printDouble(double d)
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << d << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		double arg = static_cast<double>(atof(argv[argc - 1]));
		if (isnan(arg) || isinf(arg))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			printFloat(static_cast<float>(arg));
			printDouble(static_cast<double>(arg));
		}
		else if (!isdigit(argv[1][0]) && strlen(argv[1]) == 1)
		{
			printChar(argv[1][0]);
			printInt(static_cast<int>(argv[1][0]));
			printFloat(static_cast<float>(argv[1][0]));
			printDouble(static_cast<double>(argv[1][0]));
		}
		else if (((argv[1][0] == '-' || argv[1][0] == '+') && isdigit(argv[1][1])) || isdigit(argv[1][0]))
		{
			printChar(static_cast<char>(arg));
			printInt(static_cast<int>(arg));
			printFloat(static_cast<float>(arg));
			printDouble(static_cast<double>(arg));
		}
		else
		{
			std::cout << "Wrong literal!" << std::endl;
		}
	}
	else
	{
		std::cout << "Wrong number of arguments!" << std::endl;
	}
	return 0;
}