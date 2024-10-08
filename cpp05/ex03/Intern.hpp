/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:46:55 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/19 00:48:37 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
        AForm* createRobotomyRequestForm(std::string s){
            return (new RobotomyRequestForm(s));
        }
        AForm* createPresidentialPardonForm(std::string s){
            return (new PresidentialPardonForm(s));
        }
        AForm* createShrubberyCreationForm(std::string s){
            return (new ShrubberyCreationForm(s));
        }
    public:
        
        Intern();
        Intern(const Intern &a);
        Intern& operator=(const Intern &a);
        ~Intern();
        AForm* makeForm(std::string s, std::string j);
};

#endif