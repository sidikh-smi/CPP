/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:35:55 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/19 22:39:18 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    name = "";
    hit_points = 100;
    energy_points = 100;
    attack_damages = 30;
}

FragTrap::FragTrap(std::string n)
{
    std::cout << "FragTrap  Constructor Called" << std::endl;
    name = n;
    hit_points = 100;
    energy_points = 100;
    attack_damages = 30;
}

FragTrap::FragTrap(const FragTrap &a)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    name = a.name;
    hit_points = a.hit_points;
    energy_points = a.energy_points;
    attack_damages = a.attack_damages;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Positive Hight Fives Guys" << std::endl;
}