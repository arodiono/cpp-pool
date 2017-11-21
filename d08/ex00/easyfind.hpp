/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:24:51 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 18:57:36 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &array, int num)
{
	typename T::iterator begin = std::find(array.begin(), array.end(), num);
	if (begin != array.end())
		return (begin);
	throw std::exception();
}

#endif