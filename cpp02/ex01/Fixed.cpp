/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:13:06 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/17 18:13:43 by skhaliff         ###   ########.fr       */
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
    fixed_po = a << this->bits;
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
    a = fixed_po >> 8;
    return a;
}

float Fixed::toFloat() const 
{
    float b ;
    b = (float)fixed_po / (1 << 8);
    return b;
}

void    Fixed::setRawBits(int const raw)
{
    fixed_po = raw;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"  << std::endl;
    return fixed_po;
}