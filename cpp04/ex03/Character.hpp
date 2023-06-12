/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:22:59 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/26 16:57:15 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Icharacter.hpp"
#include "AMateria.hpp"

class Character : public Icharacter
{
    private :
        AMataria a[4];
    public :
        Character();
        Character(const Character& s);
        Character operator=(const Character& s);
        ~Character();
        std::string const &getName() const;
        void    equip(AMatateria* e);
        void    unequip(int indx);
        void    use(int indx, ICharacter& target);
}