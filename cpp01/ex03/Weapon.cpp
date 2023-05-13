/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:32 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 12:14:33 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    str = name;
    std::cout << "Consractor created " << std::endl;
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string name)
{
    str = name;
}

const std::string& Weapon::getType()
{
    return(str);
}