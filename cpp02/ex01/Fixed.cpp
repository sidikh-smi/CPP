/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:13:06 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/22 00:38:55 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(): fixedPo(0)
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &s)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedPo = s.fixedPo;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPo = a << bits;
}

Fixed::Fixed(const float b)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPo = roundf(b * (1 << 8));
}

Fixed &Fixed::operator =(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        fixedPo = src.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt() const
{
    int a;
    a = fixedPo >> 8;
    return a;
}

float Fixed::toFloat() const 
{
    float b;
    b = (float)fixedPo / (1 << 8);
    return b;
}

void    Fixed::setRawBits(int const raw)
{
    fixedPo = raw;
}

int     Fixed::getRawBits(void) const
{
    return fixedPo;
}