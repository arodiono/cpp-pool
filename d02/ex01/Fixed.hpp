/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:08:32 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/01 17:08:32 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int                 _value;
	static const int    _bits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & fix);
	Fixed(const int value);
	Fixed(const float value);

	Fixed & operator=(Fixed const & fix);

	int     getRawBits(void) const;
	void    setRawBits(int const value);
	float   toFloat( void ) const;
	int     toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fix);


#endif
