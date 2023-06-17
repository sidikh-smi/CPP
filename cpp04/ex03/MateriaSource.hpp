/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:44:24 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 03:29:13 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

// class AMateria;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *a[4];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &s);
        MateriaSource &operator=(const MateriaSource &src);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif