/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:00:27 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/26 17:03:25 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character Default Constructor Called" << std::endl;
}

Character::Character(const Character& s)
{
    std::cout << "Character Copy Constructor Called" << std::endl;
    *this = s;
}
