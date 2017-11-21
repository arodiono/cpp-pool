/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:06:25 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/09 22:20:00 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {

private:
	int				*_numbers;
	unsigned int	_size;
	int				*_sorted;

  public:
	Span();
	Span(Span const &s);
	Span(unsigned int i);
	~Span();

	Span &operator=(Span const &s);
	void addNumber(int n);
	int shortestSpan(void);
	int longestSpan(void);
	
};

#endif