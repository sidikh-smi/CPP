/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:55:48 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 14:41:39 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &a)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    type = a.type;
}

Dog &Dog::operator=(const Dog& src)
{
    if (this != &src)
        type = src.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof Woof Woof" << std::endl;
}