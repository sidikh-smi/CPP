/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:49:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/21 09:15:13 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat b("amine",4);
    ShrubberyCreationForm a("omar");
    AForm *s;
    Intern q;
    try
    {
        a.beSigned(b);
        b.executeForm(a);
        s = q.makeForm("robotomy request", "sidi");
        s->beSigned(b);
        b.executeForm(*s);
    }
    catch(std::exception &e)
    {
        std::cerr << "Exeception : " << e.what() << "\n";
    }
}