/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:26:23 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/22 23:15:35 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{ 
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &a);
        ScavTrap &operator=(const ScavTrap &src);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};

#endif