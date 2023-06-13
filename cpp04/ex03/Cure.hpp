/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:23:05 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 00:03:14 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMataria.hpp"
// #include "ICharacter.hpp"

class Cure : public AMataria
{
    public :
        Cure();
        Cure(const Cure& src);
        Cure &operator=(const Cure& src);
        ~Cure();
        AMataria* clone() const ;
        void   use(ICharacter& target);
};

#endif