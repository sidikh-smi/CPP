/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:44:24 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 00:16:45 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMataria.hpp"

class AMataria;

class MateriaSource : public IMateriaSource
{
    private:
        AMataria *a[4];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &s);
        MateriaSource &operator=(const MateriaSource &src);
        ~MateriaSource();
        void learnMateria(AMataria*);
        AMataria* createMateria(std::string const & type);
};

#endif