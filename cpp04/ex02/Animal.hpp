/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 08:48:43 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/14 23:43:26 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal& a);
        Animal &operator=(const Animal &src);
        virtual ~Animal();
        std::string getType() const ;
        virtual void    makeSound() const = 0;
};

#endif