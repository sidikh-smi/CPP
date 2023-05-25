/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:29:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/24 19:52:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
    int i = -1;
    while(++i < 100)
        ideas[i] = "idea";
}

Brain::Brain(const Brain& s)
{
    int i = -1;
    while(++i < 100)
        ideas[i] = s.ideas[i];
}

Brain   &Brain::operator=(const Brain& src)
{
    if (this != &src)
    {
        int i = -1;
        while(++i < 100)
            ideas[i] = src.ideas[i];
    }
    return *this;
}

void Brain::getbrain() const
{
    int i = -1;
    while(++i < 5)
        std::cout << ideas[i] << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called " << std::endl;
}
