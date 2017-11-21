/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:57:04 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/08 20:57:05 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {}
Base::Base(Base const & base) { *this = base; }
Base::~Base() {}
Base & Base::operator=(Base const & base) {
	return const_cast<Base&>(base);
}
