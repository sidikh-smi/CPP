/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:14:19 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/17 23:16:15 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(): fixed_po(0)
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &s)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_po = s.fixed_po;
}

Fixed::Fixed(const int a)
{
    fixed_po = a << bits;
}

Fixed::Fixed(const float b)
{
    fixed_po = roundf(b * (1 << 8));
}

Fixed &Fixed::operator =(const Fixed &src)
{
    if (this != &src)
        this->fixed_po = src.getRawBits();
    return *this;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


bool Fixed::operator>(Fixed &a)
{
    return fixed_po > a.fixed_po;
}

bool Fixed::operator<(Fixed &a)
{
    return fixed_po < a.fixed_po;
}

bool Fixed::operator>=(Fixed &a)
{
    return fixed_po >= a.fixed_po;
}

bool Fixed::operator<=(Fixed &a)
{
    return fixed_po <= a.fixed_po;
}

bool Fixed::operator==(Fixed &a)
{
    return fixed_po == a.fixed_po;
}

bool Fixed::operator!=(Fixed &a)
{
    return fixed_po != a.fixed_po;
}

Fixed Fixed::operator+(Fixed &a)
{
    return Fixed(fixed_po + a.fixed_po);
}

Fixed Fixed::operator-(Fixed &a)
{
    return Fixed(fixed_po - a.fixed_po);
}

// a = b * c * d

Fixed Fixed::operator*(Fixed &a)
{
    return Fixed(fixed_po * a.fixed_po);
}

Fixed Fixed::operator/(Fixed &a)
{
    return Fixed(fixed_po / a.fixed_po);
}

Fixed& Fixed::operator++()
{
    ++fixed_po;
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
    --fixed_po;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --*this;
    return *this;
}

int Fixed::toInt() const
{
    int a;
    a = fixed_po >> 8;
    return a;
}

float Fixed::toFloat() const 
{
    float b;
    b = (float)fixed_po / 256;
    return b;
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
    //std::cout << f.getRawBits()<< std::endl;
    os << f.toFloat();
    return os;
}

void    Fixed::setRawBits(int const raw)
{
    fixed_po = raw;
}

int     Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called"  << std::endl;
    return fixed_po;
}