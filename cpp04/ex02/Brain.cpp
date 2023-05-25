/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:29:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/24 20:00:10 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
    int i = 0;
    while(i < 100)
    {
        ideas[i] = "idea";
        i++;
    }
}

Brain::Brain(const Brain& s)
{
    int i = 0;
    while(i < 100)
    {
        ideas[i] = s.ideas[i];
        i++;
    }
}

Brain   &Brain::operator=(const Brain& src)
{
    if (this != &src)
    {
        int i = 0;
        while(i < 100)
        {
            ideas[i] = "idea";
            i++;
        }
    }
    return *this;
}

void Brain::getbrain() const
{
    int i = 0;
    while(i < 5)
    {
        std::cout << ideas[i] << std::endl;
        i++;
    }
}
Brain::~Brain()
{
    std::cout << "Brain Destructor Called " << std::endl;
}
