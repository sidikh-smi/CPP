/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:00:27 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 01:39:21 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    name = "Character";
    // std::cout << "Character Default Constructor Called" << std::endl;
    for(int i = 0; i <4; i++)
      a[i] = NULL;
}

Character::Character(std::string const &n) : name(n)
{
    for(int i = 0; i <4; i++)
    {
      a[i] = NULL;
    }
}

Character::Character(const Character& s)
{
    // std::cout << "Character Copy Constructor Called" << std::endl;
    *this = s;
}

Character &Character::operator=(const Character &src)
{
    if (this != &src)
        *this = src;
    return *this; 
}

Character::~Character()
{
    // std::cout << "Character Destructor Called " << std::endl;
     for (int i=0;i<4;i++)
        delete a[i];
}

const std::string& Character::getName() const
{
    return (name);
}

void    Character::equip(AMataria* e)
{
    int i = 0;
    while (i < 4)
    {
        if (a[i] == NULL && e != NULL)
        {
            a[i] = e->clone();
            return ;
        }
        i++;
    }
}

void    Character::unequip(int indx)
{
    int i = 0;
    while(i < 4)
    {
        if (i == indx)
        {
            a[i] = NULL;
            return ;
        }
        i++;
    }
}

void    Character::use(int indx, ICharacter &target)
{
    if (indx >= 0 && indx < 4)
    {       
        if (a[indx])
        {
            a[indx]->use(target);
        }
        else
            std::cout << "ERROR" << std::endl;
    }
    
}