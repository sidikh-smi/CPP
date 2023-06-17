/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:58:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 02:18:11 by skhaliff         ###   ########.fr       */
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
    std::cout << "          WRONG         " << std::endl;
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();
 
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    a->makeSound(); //will output the cat sound!
    b->makeSound();
    delete a;
    delete b;

    Animal *s[6];
    for( int q = 0; q < 6; q++)
    {
        if (q < 3)
            s[q] = new Dog();
        else
            s[q] = new Cat();
    }
    std::cout << s[5]->getType() <<std::endl;
    for(int q = 0; q < 6; q++)
        delete s[q];
    // while(1) ;
    // system("leaks Animal");
    Animal *s = new Cat();
    s->makeSound();
    s->getType();
    delete s;
    Dog tmp;
    {
        Dog d = tmp;
        d.getType();
    }
    return 0;
}

