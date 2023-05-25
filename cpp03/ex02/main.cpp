/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:37:42 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/24 22:32:15 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a;
    FragTrap b("simo");
    a = b;
    a.attack("ahmed");
    a.takeDamage(5);
    a.beRepaired(5);
    b.attack("zak");
    a.highFivesGuys();
}