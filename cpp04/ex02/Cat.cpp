/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:48:56 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/24 20:08:20 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    s = new Brain();
    type  = "Cat";
}

Cat::Cat(const Cat &a)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    type = a.type;
}

Cat &Cat::operator=(const Cat& src)
{
    Animal::operator=(src);
    if (this != &src)
        type = src.type;
    return *this;
}

std::string    Cat::getType() const
{
    s->getbrain();
    return ("finish my ideas");
}

Cat::~Cat()
{
    delete s;
    std::cout << "Cat Destructor Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow! Meow! Meow!" << std::endl;
}