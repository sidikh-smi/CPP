/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:26:30 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/22 23:17:45 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
   
    protected :
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damages;
   public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &a);
        ClapTrap &operator=(const ClapTrap &src);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif