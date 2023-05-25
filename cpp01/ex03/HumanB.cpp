/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:22 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 00:49:20 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string s)
{
    weaponB = NULL;
    name = s;
}

HumanB::~HumanB()
{

}

void    HumanB::attack()
{
    if (weaponB != NULL)
        std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
    else
        std::cout << name << " Has no weapon " << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    weaponB = &w;
}