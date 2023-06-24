#include "PresidentialPardonForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "PresidentialPardonForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:16 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/24 21:32:12 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AFrom("PresidentialPardonForm", 145, 137)
{
    target = t;
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
