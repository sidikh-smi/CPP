/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:14:19 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/22 18:24:46 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    fixedPo = 0;
}

Fixed::Fixed(const Fixed &s)
{
    this->fixedPo = s.fixedPo;
}

Fixed::Fixed(const int a)
{
    fixedPo = a << bits;
}

Fixed::Fixed(const float b)
{
    fixedPo = roundf(b * (1 << 8));
}

Fixed &Fixed::operator =(const Fixed &src)
{
    if (this != &src)
        this->fixedPo = src.getRawBits();
    return *this;
}

Fixed::~Fixed()
{

}

bool Fixed::operator>(Fixed &a)
{
    return fixedPo > a.fixedPo;
}

bool Fixed::operator<(Fixed &a)
{
    return fixedPo < a.fixedPo;
}

bool Fixed::operator>=(Fixed &a)
{
    return fixedPo >= a.fixedPo;
}

bool Fixed::operator<=(Fixed &a)
{
    return fixedPo <= a.fixedPo;
}

bool Fixed::operator==(Fixed &a)
{
    return fixedPo == a.fixedPo;
}

bool Fixed::operator!=(Fixed &a)
{
    return fixedPo != a.fixedPo;
}

Fixed Fixed::operator+(Fixed const &a)
{
    Fixed b;
    b.setRawBits(fixedPo + a.fixedPo);
    return b;
}

Fixed Fixed::operator-(Fixed const &a)
{
    Fixed b;
    b.setRawBits(fixedPo - a.fixedPo);
    return b;
}

Fixed Fixed::operator*(Fixed &a)
{
    Fixed b;
    b.setRawBits(fixedPo * a.fixedPo / 256);
    return b;
}

Fixed Fixed::operator/(Fixed const &a)
{
    Fixed b;
    if (a.fixedPo != 0)
        b.setRawBits((fixedPo << 8) / a.fixedPo);
    else 
        std::cout << "----------- " << std::endl;
    return b;
}

Fixed& Fixed::operator++()
{
    ++fixedPo;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed& Fixed::operator--()
{
    fixedPo--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --*this;
    return *this;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.fixedPo < b.fixedPo)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.fixedPo < b.fixedPo)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.fixedPo > b.fixedPo)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.fixedPo > b.fixedPo)
        return a;
    else
        return b;
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
    b = (float)fixedPo / 256;
    return b;
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}

void    Fixed::setRawBits(int const raw)
{
    fixedPo = raw;
}

int     Fixed::getRawBits(void) const
{
    return fixedPo;
}