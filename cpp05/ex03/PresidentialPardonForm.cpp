/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:16 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/25 13:09:21 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5)
{
    target = t;
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
