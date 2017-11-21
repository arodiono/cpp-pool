/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 23:51:50 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 13:39:35 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : public ClapTrap {

public:
    NinjaTrap();
    NinjaTrap(std::string const name);
    NinjaTrap(NinjaTrap const &name);
    ~NinjaTrap();
    
    NinjaTrap & operator=(NinjaTrap const & trap);

    void    ninjaShoebox(ClapTrap & trap);
    void    ninjaShoebox(FragTrap & trap);
    void    ninjaShoebox(ScavTrap & trap);
    void    ninjaShoebox(NinjaTrap & trap);
    
};

#endif