/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:09:58 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/03 22:39:05 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(FragTrap const & trap);  
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & trap);

    void    vaulthunter_dot_exe(std::string const & target);
};

#endif