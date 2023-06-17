/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:44:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/15 02:16:53 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i <4; i++) 
       a[i] = NULL;

}

MateriaSource::MateriaSource(const MateriaSource& s)
{
    for(int i = 0; i <4; i++) 
       a[i] = NULL;
    *this = s;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& src)
{
    if (this != &src)
    {
        for(int i = 0; i < 4; i++)
        {
            if (a[i])
                delete a[i];
            if (src.a[i])
                a[i] = src.a[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4 ;i++)
        if (a[i])
            delete a[i];
}

void    MateriaSource::learnMateria(AMateria* s)
{
    for(int i = 0; i < 4; i++)
    {
        if (a[i] == NULL && s != NULL)
        {
            a[i] = s;
            return ;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const &t)
{
    for (int i=0; i <4; i++)
        if (a[i] && (a[i]->getType() == t))
            return (a[i]->clone());
    return (NULL);
}