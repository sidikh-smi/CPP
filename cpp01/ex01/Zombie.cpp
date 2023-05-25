/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:53 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 00:21:40 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setname(std::string n)
{
    name = n;
}

void Zombie::annonce()
{
    std::cout << name << " : Brainzzzzz....." << std::endl;
}