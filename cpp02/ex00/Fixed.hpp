/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:11:27 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/16 21:50:13 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#include <iostream>

class Fixed{
    private :
        int i;
        static const int bits;
    public :
        Fixed();
        Fixed(const Fixed &s);
        Fixed &operator = (const Fixed &src);
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};

#endif