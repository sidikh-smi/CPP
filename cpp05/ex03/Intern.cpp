/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:49:55 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/19 00:49:55 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()    {}

Intern::Intern(const Intern &a)
{
    *this = a;
}

Intern& Intern::operator=(const Intern &a)
{
    (void)a;
    return (*this);
}

Intern::~Intern() {}

void    delete_s(AForm* forms[3], int l)
{
    int i = 0;

    while (i < 3)
    {
        if(i != l)
            delete forms[i];
        i++;
    }
}

AForm* Intern::makeForm(std::string s, std::string j)
{
    if(s.size() == 0)
    {
        std::cout << "Error name Form" << std::endl;
        return (NULL);
    }
    Intern b;
    AForm* forms[3] = {Intern::createRobotomyRequestForm(j), Intern::createPresidentialPardonForm(j), Intern::createShrubberyCreationForm(j)};
    char tab[3][21] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int l = 0;
    while (l < 3)
    {
        if(tab[l] == s)
        {
            delete_s(forms,l);
            return forms[l];
        }
        l++;
    }
    if(l == 3)
        delete_s(forms, l);
    throw std::exception();
}

