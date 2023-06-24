/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 05:54:33 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/24 21:42:40 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("AForm"), i(0), grade(0)
{
    _signed = false;
}

AForm::AForm(std::string n, int j, int p):name(n), i(j), grade(p)
{
    _signed = false;
}

AForm::AForm(const AForm &a): name(a.name), i(a.i), grade(a.grade)
{
    _signed = a._signed;
}

AForm& AForm::operator=(const AForm& a)
{
    if (this != &a)
        _signed = a._signed;
    return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
    return name;
}

bool AForm::getSigned() const
{
    return _signed;
}

int AForm::getGrade() const
{
    return grade;
}

int AForm::getGradeToSigne() const
{
    return i;
}

const char*   AForm::GradeTooLowException::what() const throw()
{
    return("Too Low exception");
}

const char*   AForm::GradeTooHighException::what() const throw()
{
    return("Too Hight exception");
}

std::ostream& operator<<(std::ostream& os, const AForm& a)
{
    os << a.getName();
    os << std::endl;
    os << a.getSigned();
    os << std::endl;
    os << a.getGradeToSigne();
    os << std::endl;
    os << a.getGrade();
    os << std::endl;
    return os;
}

void    AForm::beSigned(Bureaucrat a) 
{
    if (a.getGrade() <= i)
        _signed = true;
    else
    {
        std::cout << "ERROR\n";
        throw AForm::GradeTooLowException();
    }
}