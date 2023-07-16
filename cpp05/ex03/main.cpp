/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:49:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/16 21:40:53 by skhaliff         ###   ########.fr       */
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
    // ShrubberyCreationForm a("omar");
    AForm *s;
    Intern q;
    try{
        // a.beSigned(b);
        // //a.execute(b);
        // b.executeForm(a);
        s = q.makeForm("presidential pardon", "sidi");
       // std::cout << "hello" << s->getGrade() << std::endl;
        s->beSigned(b);
        s->execute(b);
        // b.executeForm(s);
    }
    catch(...)
    {
        std::cout << "Error\n";
    }
    system("leaks Form");
}