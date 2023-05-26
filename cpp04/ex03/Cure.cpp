/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:49:23 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/25 22:20:12 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    name = "cure";
}

Cure::Cure(const Cure &s)
{
    name = s.name;
}

Cure Cure::operator=(const Cure &src)
{
    if (this != &src)
        name = src.name;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called" << std::endl;
}

AMateria* Cure::clone()
{
    AMateria* s = new Cure();
    return s;
}

void    Cure::use(Icharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}