/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:28:36 by skhaliff          #+#    #+#             */
/*   Updated: 2023/04/28 14:55:22 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("hello");
    zombie->announce();
    randomChump(" world");
    delete(zombie);
   // system("leaks zombie");
}
