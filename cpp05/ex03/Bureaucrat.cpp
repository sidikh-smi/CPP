/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:52:17 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/21 09:13:24 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat")
{
    grade = 1;
}

Bureaucrat::Bureaucrat(int n): name("Bureaucrat")
{
    if(n < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(n > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = n;
}

Bureaucrat::Bureaucrat(std::string n, int q): name(n)
{
    if(q < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(q > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = q;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a): name(a.name)
{
    grade = a.grade;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
    if (this != &a)
        grade = a.grade;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &s)
{
    os << s.getName();
    os << ", bureaucrat grade ";
    os << s.getGrade();
    return os;
}

std::string Bureaucrat::getName() const
{
    return(name);
}

int Bureaucrat::getGrade() const
{
    return(grade);
}

const char*   Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Too Low exception");
}

const char*   Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Too Hight exception");
}

void    Bureaucrat::incrementing()
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    grade--;
}

void    Bureaucrat::decrementing()
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void    Bureaucrat::signForm(AForm &a)
{
    try
    {
        a.beSigned(*this);
        std::cout << name << " ------------signed " << a.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << name << " couldn't sign "<< a.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm  &s) const
{
    try
    {
        s.execute(*this);
        std::cout << name << " excute " << s.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << name << " couldn't excute " << s.getName() << " because " << e.what() << std::endl;
    }
}
