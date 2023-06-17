/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 08:58:10 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 20:40:35 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog :public Animal
{
    Brain   *s;
    public :
        Dog();
        Dog(const Dog& a);
        Dog &operator=(const Dog &src);
        ~Dog();
        //std::string    getType() const;
        void    makeSound() const;
};

#endif