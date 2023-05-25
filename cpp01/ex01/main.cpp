/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:47 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 00:23:22 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *z = zombieHorde(N, "simo");
    int i = 0;
    if (!z)
        return 1;
    while (i < N)
    {
        z[i].annonce();
        i++;
    }
    delete[] z;
}