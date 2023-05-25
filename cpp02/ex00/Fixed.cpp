/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:11:23 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/21 22:56:04 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedPo = 0;
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &s)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedPo = s.getRawBits();
}

Fixed &Fixed::operator =(const Fixed &src)
{
    std::cout << " Copy assignment operator called " << std::endl;
    if (this != &src)
        this->fixedPo = src.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{
    fixedPo = raw;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"  << std::endl;
    return fixedPo;
}