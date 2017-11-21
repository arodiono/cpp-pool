/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 20:27:39 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 23:29:14 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap {

public:
    SuperTrap(void);
    SuperTrap(std::string const name);
    SuperTrap(SuperTrap const & trap); 
    ~SuperTrap(void);

    SuperTrap & operator=(SuperTrap const & trap);
};

#endif