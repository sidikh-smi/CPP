/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:15:00 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 17:31:38 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if (N < 1)
        return NULL;
    zombie *z = new zombie[N];
    while(i < N)
    {
        z[i].setname(name);
        i++;
    }
    return (z);
}