/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:36:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 19:57:39 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#ifndef AMateria_HPP
#define AMateria_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria{
    protected:
        std::string name;
    public:
        AMateria();
        AMateria(const AMateria& a);
        AMateria(std::string const &type);
        AMateria &operator=(const AMateria& src);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif