/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:49:23 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 01:27:06 by skhaliff         ###   ########.fr       */
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

Cure &Cure::operator=(const Cure &src)
{
    if (this != &src)
        name = src.name;
    return *this;
}

Cure::~Cure()
{
    // std::cout << "Cure Destructor Called" << std::endl;
}

AMataria* Cure::clone() const 
{
    return new Cure();
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}