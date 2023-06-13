/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:22:59 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 00:02:19 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMataria.hpp"

class Character : public ICharacter
{
    private :
        AMataria *a[4];
        std::string name;
    public :
        Character();
        Character(std::string const &n);
        Character(const Character& s);
        Character &operator=(const Character& s);
        ~Character();
        std::string const &getName() const;
        void    equip(AMataria* e);
        void    unequip(int indx);
        void    use(int indx, ICharacter& target);
};

#endif