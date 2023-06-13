/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:12:31 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 01:27:01 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    name = "ice";
}

Ice::Ice(const Ice &s)
{
    name = s.name;
}

Ice &Ice::operator=(const Ice &src)
{
    if (this != &src)
        name = src.name;
    return *this;
}

Ice::~Ice()
{
    // std::cout << "Ice Destructor Called" << std::endl;
}

AMataria* Ice::clone() const 
{
    return new Ice();
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}