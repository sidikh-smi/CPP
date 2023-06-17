/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:23:05 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/14 02:53:01 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
// #include "ICharacter.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure& src);
        Cure &operator=(const Cure& src);
        ~Cure();
        AMateria* clone() const ;
        void   use(ICharacter& target);
};

#endif