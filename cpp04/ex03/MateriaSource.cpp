/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:44:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/13 01:39:14 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MateriaSource Constructor Called" << std::endl;
    for(int i = 0; i <4; i++) 
       a[i] = NULL;

}

MateriaSource::MateriaSource(const MateriaSource& s)
{
    // std::cout << "MateriaSource Copy Constructor Called" << std::endl;
    *this = s;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

MateriaSource::~MateriaSource()
{
    // std::cout << "MateriaSource Destructor Called" << std::endl;
    for (int i=0;i<4;i++)
        delete a[i];
}

void    MateriaSource::learnMateria(AMataria* s)
{
    int i = 0;
    while(i < 4)
    {
        if (a[i] == NULL && s != NULL)
        {
            a[i] = s;
            return ;
        }
        i++;
    }
}

AMataria* MateriaSource::createMateria(std::string const &t)
{
    for (int i=0;i <4; i++)
    {       
        if (a[i] && (a[i]->getType() == t))
        {
            // std::cout << a[i]->getType() << "***" << t << std::endl;
            return (a[i]->clone());
        }
    }
    return (NULL);
}