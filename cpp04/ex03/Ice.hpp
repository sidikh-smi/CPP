/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:43:03 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 00:03:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMataria.hpp"
// #include "ICharacter.hpp"

class Ice : public AMataria
{
    public :
        Ice();
        Ice(const Ice& src);
        Ice &operator=(const Ice& src);
        ~Ice();
        AMataria* clone() const;
        void   use(ICharacter& target);
};

#endif