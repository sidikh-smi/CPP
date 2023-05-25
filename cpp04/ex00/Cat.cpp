/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:48:56 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 14:41:32 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    type  = "Cat";
}

Cat::Cat(const Cat &a)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    type = a.type;
}

Cat &Cat::operator=(const Cat& src)
{
    if (this != &src)
        type = src.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow! Meow! Meow!" << std::endl;
}