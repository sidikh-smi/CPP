/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:51:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/19 21:23:50 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    name = "";
    hit_points = 100;
    energy_points = 50;
    attack_damages = 20;
}

ScavTrap::ScavTrap(std::string n)
{
    std::cout << "ScavTrap  Constructor Called" << std::endl;
    name = n;
    hit_points = 100;
    energy_points = 50;
    attack_damages = 20;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    name = a.name;
    hit_points = a.hit_points;
    energy_points = a.energy_points;
    attack_damages = a.attack_damages;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        name = src.name;
        hit_points = src.hit_points;
        energy_points = src.energy_points;
        attack_damages = src.attack_damages;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "GUARDGATE" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points && energy_points)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << attack_damages << " points of damages" << std::endl;
        energy_points -= 1;
    }
    else
        std::cout << name << " don't have any hit points or energy points" << std::endl;
}