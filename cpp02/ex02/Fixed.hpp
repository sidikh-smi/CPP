/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:04:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/17 23:16:17 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private :
        int fixed_po;
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
        bool operator>(Fixed& a);
        bool operator<(Fixed& a);
        bool operator>=(Fixed& a);
        bool operator<=(Fixed &a);
        bool operator==(Fixed &a);
        bool operator!=(Fixed &a);
        Fixed operator+(Fixed &a);
        Fixed operator-(Fixed &a);
        Fixed operator*(Fixed &a);
        Fixed operator/(Fixed &a);
        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);
};

std::ostream& operator<<(std::ostream &os, const Fixed &f);



#endif