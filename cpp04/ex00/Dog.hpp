/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 08:58:10 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 14:52:03 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog :public Animal
{
    public :
        Dog();
        Dog(const Dog& a);
        Dog &operator=(const Dog &src);
        ~Dog();
        void    makeSound() const;
};

#endif