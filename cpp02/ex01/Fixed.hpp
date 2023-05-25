/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:13:26 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/22 00:38:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private :
        int fixedPo;
        static  const int bits = 8;
    public :
        Fixed();
        Fixed(const Fixed &s);
        Fixed(const int a);
        Fixed(const float b);
        Fixed &operator = (const Fixed &src);
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
        float toFloat() const;
        int toInt() const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &f);


#endif