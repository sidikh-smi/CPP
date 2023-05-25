/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:26:11 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/24 22:31:55 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ScavTrap a;
    ScavTrap b("simo");
    a = b;
    a.attack("ahmed");
    a.takeDamage(5);
    a.beRepaired(5);
    b.attack("zak");
    a.guardGate();
}