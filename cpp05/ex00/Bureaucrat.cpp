/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:52:17 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/17 10:29:55 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat")
{
    i = 0;
}

Bureaucrat::Bureaucrat(std::string n, int q): name(n)
{
    i = q;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
    i = a.i;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
    if (this != &a)
        i = a.i;
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
    return(i);
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
    if (i < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (i > 150)
        throw Bureaucrat::GradeTooHighException();
    i--;
}

void    Bureaucrat::decrementing()
{
    if (i < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (i > 150)
        throw Bureaucrat::GradeTooHighException();
    i++;
}
