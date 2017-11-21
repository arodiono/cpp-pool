/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 23:48:26 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/10 21:40:59 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack<T>() : std::stack<T>() {}
	~MutantStack<T>() {}
	MutantStack<T>(MutantStack<T> const &src) : std::stack<T>(src) {}

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}
};

#endif