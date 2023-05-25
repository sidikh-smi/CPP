/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:36:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/25 11:26:14 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default Constructor Called" << std::endl;
    name = "";
}

AMateria::AMateria(const AMateria& s)
{
    name = s.name;
}

AMateria::AMateria(const std::string &s)
{
    name = s;
}

AMateria::operator=(const AMateria& src)
{
    if (this != &src)
    {
        name = src.name;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "Deconstructor Called" << std::endl;
}

const std::string& AMateria::getType() const
{
    return name;
}
