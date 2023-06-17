/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:58:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 02:46:56 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    std::cout << "------------ WRONG------------" << std::endl;
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();

    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    a->makeSound(); //will output the cat sound!
    b->makeSound();
    delete a;
    delete b;
return 0;
}