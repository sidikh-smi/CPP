/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:50:35 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 15:12:05 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    type  = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a)
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    type = a.type;
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
    if (this != &src)
        type = src.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "e WrongAnimal sound" << std::endl;
}