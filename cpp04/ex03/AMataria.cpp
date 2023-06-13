/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMataria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:36:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 00:25:13 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMataria.hpp"

AMataria::AMataria()
{
    // std::cout << "Default Constructor Called" << std::endl;
    name = "";
}

AMataria::AMataria(const AMataria& s)
{
    name = s.name;
}

AMataria::AMataria(const std::string &s)
{
    name = s;
}

AMataria &AMataria::operator=(const AMataria& src)
{
    if (this != &src)
        name = src.name;
    return *this;
}

AMataria::~AMataria()
{
    // std::cout << "Deconstructor Called" << std::endl;
}

const std::string& AMataria::getType() const
{
    return name;
}

void AMataria::use(ICharacter& target)
{
    std::cout << "hello from " << target.getName() << std::endl;
}