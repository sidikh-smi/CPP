/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:20:01 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 15:40:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Contructor Called" << std::endl;
    type = "";
}

Animal::Animal(const Animal &a)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    type = a.type;
}

Animal &Animal::operator=(const Animal &src)
{
    if(this != &src)
        type = src.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}
