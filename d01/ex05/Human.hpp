/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:45:32 by arodiono          #+#    #+#             */
/*   Updated: 2017/10/31 17:45:32 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <sstream>

class Human {

public:
	Human(void);
	Brain&       getBrain(void);
	std::string identify(void);
private:
	const Brain brain;

};

#endif
