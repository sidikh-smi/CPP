/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:36:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 02:15:14 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
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

AMateria &AMateria::operator=(const AMateria& src)
{
    if (this != &src)
        name = src.name;
    return *this;
}

AMateria::~AMateria()
{

}

const std::string& AMateria::getType() const
{
    return name;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "hello from " << target.getName() << std::endl;
}