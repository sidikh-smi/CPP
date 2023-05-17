/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:11:23 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/16 21:51:10 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(): i(0)
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &s)
{
    std::cout << "Copy constructor called" << std::endl;
    i = s.i;    
}

Fixed &Fixed::operator =(const Fixed &src)
{
    if (this != &src)
        this->i = src.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{
    i = raw;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"  << std::endl;
    return i;
}