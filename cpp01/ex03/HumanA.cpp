/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:14 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 12:14:15 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA(std::string n, Weapon& weapons)
// {
//     name = n;
//     weaponA = weapons;
//    //std::cout << name << "attacks with their " << weaponA.str << std::endl;
// }

HumanA::~HumanA()
{

}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}