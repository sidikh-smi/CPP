/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:55:48 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 23:35:08 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    s = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog &a)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    s = new Brain();
    *s = *a.s;
    type = a.type;
}

Dog &Dog::operator=(const Dog& src)
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

// std::string    Dog::getType() const
// {
//     s->getbrain();
//     return ("finish my ides");
// }

Dog::~Dog()
{
    delete s;
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof Woof Woof" << std::endl;
}