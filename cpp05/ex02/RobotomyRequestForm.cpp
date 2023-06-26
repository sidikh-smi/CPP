/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:21 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/25 10:50:24 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string t): AForm("RobotomyRequestForm", 72, 45)
{
    target = t;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void    RobotomyRequestForm::execute(Bureaucrat const &s) const
{
    if (getSigned())
    {
        std::cout << "hello\n";
        if (s.getGrade() < getGrade())
        {
            std::cout << "Drilling Noises" << std::endl;
            // int l = rand() / 2;
        }
    }
    else
        throw AForm::GradeTooLowException();
}