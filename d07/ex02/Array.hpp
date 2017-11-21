/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:02:34 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 18:24:59 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

private:
	T				*_array;
	unsigned int	_size;

public:
	Array<T>() : _array(NULL), _size(0) {}
	Array<T>(Array<T> const & arr) {
		*this = arr;
	}
	Array<T>(unsigned int size) : _array(NULL), _size(size){
		_array = new T[size];
	}
	~Array<T>() {
		if (_array != NULL)
			delete[] _array;
	}

	Array<T> & operator=(Array<T> const & arr) {
		this->_size = arr._size;
		this->_array = new T[arr._size];
		for (unsigned int i = 0; i < arr._size; i++){
			this->_array[i] = arr._array[i];
		}
		return *this;
	}

	T	&operator[](unsigned int n) {
		if (n >= _size)
			throw std::exception();
		else
			return this->_array[n];
	}

	unsigned int size() {
		return _size;
	}
};

#endif