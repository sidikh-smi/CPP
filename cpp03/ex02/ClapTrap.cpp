/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:45:37 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/23 18:32:18 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
    name = "";
    hit_points = 10;
    energy_points = 10;
    attack_damages = 0;
}

ClapTrap::ClapTrap(std::string n)
{
    std::cout << "ClapTrap Constructor Clalled" << std::endl;
    name = n;
    hit_points = 10;
    energy_points = 10;
    attack_damages = 0;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
    std::cout << "ClapTrap Copy Contructor Called " << std::endl; 
    name = a.name;
    hit_points  = a.hit_points;
    energy_points = a.energy_points;
    attack_damages = a.attack_damages;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &a)
{
    if (this != &a)
    {
        name = a.name;
        hit_points = a.hit_points;
        energy_points = a.energy_points;
        attack_damages = a.attack_damages;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destractor Called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hit_points && energy_points)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attack_damages << " points of damages" << std::endl;
        energy_points -= 1;
    }
    else
        std::cout << name << " don't have any hit points or energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0)
        std::cout << name << " is dead" << std::endl;
    else
    {
        std::cout << name << " has take a damage" << std::endl;
        hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points == 0)
        std::cout << name << " Can't be repaired" << std::endl;
    else
    {
        std::cout << name << " repairs itself" << std::endl;
        hit_points += amount;
        energy_points -= 1;
    }
}