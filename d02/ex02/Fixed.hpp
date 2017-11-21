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

	Fixed  operator++(int);
	Fixed & operator--(int);
	Fixed & operator++(void);
	Fixed & operator--(void);

	Fixed & operator=(Fixed const & fix);
	Fixed  operator+(Fixed const & fix);
	Fixed  operator-(Fixed const & fix);
	Fixed  operator*(Fixed const & fix);
	Fixed  operator/(Fixed const & fix);

	bool operator>(Fixed const & fix);
	bool operator<(Fixed const & fix);
	bool operator>=(Fixed const & fix);
	bool operator<=(Fixed const & fix);
	bool operator==(Fixed const & fix);
	bool operator!=(Fixed const & fix);

	static Fixed &min(Fixed & ref1, Fixed & ref2);
	static Fixed &max(Fixed & ref1, Fixed & ref2);
	static Fixed const &min(Fixed const & ref1, Fixed const & ref2);
	static Fixed const &max(Fixed const & ref1, Fixed const & ref2);

	int     getRawBits(void) const;
	void    setRawBits(int const value);
	float   toFloat( void ) const;
	int     toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fix);

#endif
