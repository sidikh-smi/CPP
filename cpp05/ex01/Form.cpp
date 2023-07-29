/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 05:54:33 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/21 09:20:09 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Form"), i(0), grade(0)
{
    _signed = false;
}

Form::Form(int n, int j):name("Form"), i(n), grade(j)
{
    _signed = false;
}

Form::Form(std::string n, int j, int p):name(n), i(j), grade(p)
{
    _signed = false;
}

Form::Form(const Form &a): name(a.name), i(a.i), grade(a.grade)
{
    _signed = a._signed;
}

Form& Form::operator=(const Form& a)
{
    if (this != &a)
        _signed = a._signed;
    return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return name;
}

bool Form::getSigned() const
{
    return (this->_signed);
}

int Form::getGrade() const
{
    return grade;
}

int Form::getGradeToSigne() const
{
    return i;
}

const char*   Form::GradeTooLowException::what() const throw()
{
    return("Too Low exception");
}

const char*   Form::GradeTooHighException::what() const throw()
{
    return("Too Hight exception");
}

std::ostream& operator<<(std::ostream& os, const Form& a)
{
    os << a.getName();
    os << std::endl;
    os << a.getSigned();
    os << std::endl;
    os << a.getGradeToSigne();
    os << std::endl;
    os << a.getGrade();
    return os;
}

void    Form::beSigned(Bureaucrat a) 
{
    if (a.getGrade() <= i)
        this->_signed = 1;
    else
        throw Form::GradeTooLowException();
}