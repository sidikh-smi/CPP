/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:12:31 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/26 16:59:21 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    name = "Ice";
}

Ice::Ice(const Ice &s)
{
    name = s.name;
}

Ice Ice::operator=(const Ice &src)
{
    if (this != &src)
        name = src.name;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor Called" << std::endl;
}

AMateria* Ice::clone()
{
    AMateria* s = new Ice();
    return s;
}

void    Ice::use(Icharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}