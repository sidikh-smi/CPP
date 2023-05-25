/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:15:00 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 00:23:31 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if (N < 1)
        return NULL;
    Zombie *z = new Zombie[N];
    while(i < N)
    {
        z[i].setname(name);
        i++;
    }
    return (z);
}