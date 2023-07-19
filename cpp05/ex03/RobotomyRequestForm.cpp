/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:21 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/19 01:20:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string t): AForm("RobotomyRequestForm", 72, 45)
{
    target = t;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a): AForm("RobotomyRequestForm", 72, 45)
{
    target = a.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
    if(this != &a)
        target = a.target;
    return (*this);
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
            int l = time(0);
            if((l % 2))
                std::cout << target << " has been robotomized successfully 50% of the time." << std::endl;
            else
                std::cout << target << " robotomy failed." << std::endl;
        }
    }
    else
        throw AForm::GradeTooLowException();
}