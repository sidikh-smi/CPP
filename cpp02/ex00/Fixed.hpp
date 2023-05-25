/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:11:27 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/21 22:54:40 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#include <iostream>

class Fixed{
    private :
        int fixedPo;
        static const int bits = 8;
    public :
        Fixed();
        Fixed(const Fixed &s);
        Fixed &operator = (const Fixed &src);
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};

#endif