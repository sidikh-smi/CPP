/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:48:56 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/14 23:35:32 by skhaliff         ###   ########.fr       */
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
    s = new Brain();
    type = a.type;
    *s = *a.s;
}

Cat &Cat::operator=(const Cat& src)
{
    
    if (this != &src)
    {
        if (s)
            delete s;
        s = new Brain();
        type = src.type;
        *s = *src.s;
    }
    return *this;
}

// std::string    Cat::getType() const
// {
//     s->getbrain();
//     return ("finish my ides");

// }

Cat::~Cat()
{
    delete s;
    std::cout << "Cat Destructor Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow! Meow! Meow!" << std::endl;
}