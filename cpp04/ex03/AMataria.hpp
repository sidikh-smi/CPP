/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMataria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:36:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 01:32:06 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMataria_HPP
#define AMataria_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMataria{
    protected:
        std::string name;
    public:
        AMataria();
        AMataria(const AMataria& a);
        AMataria(std::string const &type);
        AMataria &operator=(const AMataria& src);
        virtual ~AMataria();
        std::string const & getType() const; //Returns the materia type
        virtual AMataria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif