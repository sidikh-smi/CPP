/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:21 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/16 21:37:25 by skhaliff         ###   ########.fr       */
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
        if (s.getGrade() < getGrade())
        {
            std::cout << "Drilling Noises" << std::endl;
            int l = time(NULL);
            std::cout << l << std::endl;
            if((l % 2))
                std::cout << target << " has been robotomized successfully 50% of the time." << std::endl;
            else
                std::cout << target << " robotomy failed." << std::endl;
        }
    }
    else
        throw AForm::GradeTooLowException();
}