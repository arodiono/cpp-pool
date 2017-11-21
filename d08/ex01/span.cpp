/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:16:04 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 23:45:20 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

static unsigned int i = 0;

Span::Span() : _numbers(NULL), _size(0) {}
Span::Span(Span const & s) {
	*this = s;
}
Span::Span(unsigned int i) : _numbers(NULL), _size(0) {
	_numbers = new int[i];
	_sorted = new int[i];
	_size = i;
}
Span::~Span() {
	if (_numbers != NULL)
		delete[] _numbers;
}

Span & Span::operator=(Span const & s) {
	this->_size = s._size;
	this->_numbers = s._numbers;
	return *this;
}

void Span::addNumber(int n)
{
	if (i < _size) {
		_numbers[i] = n;
		_sorted[i] = n;
		i++;
	} else {
		throw std::exception();
	}
}

int Span::shortestSpan(void) {
	if (_size <= 1)
		throw std::exception();
	int min = 2147483647;
	std::sort(_sorted, _sorted + _size);
	for (unsigned int i = 1; i < _size; i++)
	{
		if ((_sorted[i] - _sorted[i - 1]) < min)
			min = _sorted[i] - _sorted[i - 1];
	}
	return (min);
}

int Span::longestSpan(void) {
	if (_size <= 1)
		throw std::exception();
	std::sort(_sorted, _sorted + _size);
	return (_sorted[_size - 1] - _sorted[0]);
}