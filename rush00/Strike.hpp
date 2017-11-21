/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Strike.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 22:48:04 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/04 23:01:00 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIKE_HPP
# define STRIKE_HPP

# include "Player.hpp"

class Strike{

public:
    int _x;
    int _y;
    
    Strike();
    Strike(int x, int y);    
    Strike(Strike const & strike);
    ~Strike(void);

    Strike & operator=(Strike const & strike);
};

#endif