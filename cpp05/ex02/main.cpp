/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:49:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/21 09:18:00 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b("amine",4);
    PresidentialPardonForm a("omar");
    try
    {
        a.beSigned(b);
        a.execute(b);
        b.executeForm(a);
    }
    catch(std::exception &e)
    {
        std::cerr << "Exeception : " << e.what() << std::endl;
    }
}
