/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:00:27 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/26 17:03:25 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character Default Constructor Called" << std::endl;
    int i = 0;
    while(i++ < 4)
        s[i].name = "";
}

Character::Character(const Character& s)
{
    std::cout << "Character Copy Constructor Called" << std::endl;
    *this = s;
}

Character Character::operator=(const Character &src)
{
    if (this != &src)
        *this = src;
    return *this; 
}

Character::~Character()
{
    std::cout << "Character Destructor Called " << std::endl;
}

const std::string& Character::getName() const
{
    
}

void    Character::equip(AMateria* e)
{

}

void    Character::unequip(int indx)
{

}

void    Character::use(int indx, ICharacter &target)
{
    
}