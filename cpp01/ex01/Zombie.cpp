/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:53 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 12:14:54 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie::zombie()
{
    std::cout << "welcome!!!" << std::endl;
}

zombie::~zombie()
{
    std::cout << "Bye!!!" << std::endl;
}

void zombie::setname(std::string n)
{
    name = n;
}

void zombie::annonce()
{
    std::cout << name << " : Brainzzzzz....." << std::endl;
}