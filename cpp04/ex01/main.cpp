/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:58:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 02:19:10 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Cat test;
    {
        Cat tmp = test;
        std::cout << tmp.getType() << std::endl;
    }
    Animal *s[6];
    int q;
    for( q = 0; q < 4; q++)
    {
        if (q < 2)
            s[q] = new Dog();
        else
            s[q] = new Cat();
    }
    for (int i=0; i <4; i++)
        s[i]->makeSound();
    std::cout << s[2]->getType() << std::endl;
    for(q = 0; q < 4; q++)
        delete s[q];
    return 0;
}
