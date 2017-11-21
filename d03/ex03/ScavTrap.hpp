/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:50:44 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:28:34 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap(void);
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const & trap); 
    ~ScavTrap(void);

    ScavTrap & operator=(ScavTrap const & trap);

    void    challengeNewcomer(void);
};

#endif