/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:16 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/19 01:22:29 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5)
{
    target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5)
{
    target = t;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a): AForm("PresidentialPardonForm", 25, 5)
{
    *this = a;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
    if(this != &a)
        target = a.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{  
}

void PresidentialPardonForm::execute(Bureaucrat const &e) const
{
    if (getSigned())
    {
        if (e.getGrade() < getGrade())
            std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}
