/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:49:55 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/16 22:01:08 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}
// AForm* Intern::makeForm(std::string s, std::string j)
// {
//     if(s.size() == 0)
//     {
//         std::cout << "Error name Form" << std::endl;
//         return (NULL);
//     }
//     AForm* forms[3] = {new RobotomyRequestForm(j) , new PresidentialPardonForm(j), new ShrubberyCreationForm(j)};
//     std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
//     int l = 0;
//     while (l < 3)
//     {
//         if(names[l] == s)
//         {
//             destroy(froms,l);
//             return forms[l];
//         }
//         l++;
//     }
    
//     throw std::exception();
//    return(NULL);
// }
AForm* Intern::makeForm(std::string s, std::string j)
{
    if(s.size() == 0)
    {
        std::cout << "Error name Form" << std::endl;
        return (NULL);
    }
    // AForm* a;
    Intern b;
    AForm* tabs[3] = {Intern::createPresidentialPardonForm(j), Intern::createRobotomyRequestForm(j), Intern::createShrubberyCreationForm(j)};
    char tab[3][21] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int l = 0;
    while (l < 2)
    {
        if(tab[l] == s)
        {
        //     switch(l)
        //     {
        //         case 0:
        //             a = new RobotomyRequestForm(j);
        //             return(a);
        //         case 1:
        //             a = new PresidentialPardonForm(j);
        //             return(a);
        //         case 2:
        //             a = new ShrubberyCreationForm(j);
        //             return(a);
        //     }
        // }
            return tabs[l];
        }
        l++;
    }
    return(NULL);
}

