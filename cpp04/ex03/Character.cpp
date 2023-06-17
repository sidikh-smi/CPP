/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:00:27 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 03:02:40 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    name = "";
    for(int i = 0; i < 4; i++)
      a[i] = NULL;
}

Character::Character(std::string const &n) : name(n)
{
    for(int i = 0; i <4; i++)
      a[i] = NULL;
}

Character::Character(const Character& s)
{
    for(int i = 0; i <4; i++)
        a[i] = NULL;
    *this = s;
}

Character &Character::operator=(const Character &src)
{
    if (this != &src)
    {
        for(int i  =0; i < 4; i++)
        {
            if (a[i])
                delete a[i];
            if (src.a[i])
                a[i] = src.a[i]->clone();
        }
        name = src.name;
    }
    return *this;
}

Character::~Character()
{
     for (int i=0;i<4;i++)
        delete a[i];
}

const std::string& Character::getName() const
{
    return (name);
}

void    Character::equip(AMateria* e)
{
    for(int i = 0; i  < 4; i++)
    {
        if (a[i] == NULL && e != NULL)
        {
            a[i] = e->clone();
            return ;
        }
    }
}

void    Character::unequip(int indx)
{
    if (indx >=0 && indx < 4)
    {
        a[indx] = NULL;
        return ;
    }
}

void    Character::use(int indx, ICharacter &target)
{
    if (indx >= 0 && indx < 4 && a[indx])
            a[indx]->use(target);
}