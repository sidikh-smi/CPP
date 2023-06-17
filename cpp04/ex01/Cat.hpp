/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 08:50:23 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 20:39:13 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain *s;
    public :
        Cat();
        Cat(const Cat& a);
        Cat &operator=(const Cat &src);
        ~Cat();
        void    makeSound() const ;
        //std::string    getType() const;
};

#endif