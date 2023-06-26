/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:49:55 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/25 13:13:15 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string s, std::string j)
{
    if(s.size() == 0)
    {
        std::cout << "Error name Form" << std::endl;
        return (NULL);
    }
    AForm* a;
    char tab[4][21] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int l = 0;
    while (l < 3)
    {
        if(tab[l] == s)
        {
            switch(l)
            {
                case 0:
                    a = new RobotomyRequestForm(j);
                    return(a);
                case 1:
                    a = new PresidentialPardonForm(j);
                    return(a);
                case 2:
                    a = new ShrubberyCreationForm(j);
                    return(a);
            }
        }
        l++;
    }
    return(NULL);
}