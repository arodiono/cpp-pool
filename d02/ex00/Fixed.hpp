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

class Fixed {

private:
	int                 _value;
	static const int    _bits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & fix);

	Fixed & operator=(Fixed const & fix);
	int     getRawBits(void) const;
	void    setRawBits(int const value);
};

#endif
