/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:29:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 20:40:24 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "idea";
}

Brain::Brain(const Brain& s)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = s.ideas[i];
}

Brain   &Brain::operator=(const Brain& src)
{
    if (this != &src)
    {
        for(int i = 0; i < 100; i++)
            ideas[i] = src.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called " << std::endl;
}

// void Brain::getbrain() const
// {
//     for(int i = 0; i < 3; i++)
//         std::cout << ideas[i] << std::endl;
// }
