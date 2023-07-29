/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:53:09 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/21 09:19:33 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(int n);
        Bureaucrat(std::string n, int a);
        Bureaucrat(const Bureaucrat &s);
        Bureaucrat &operator=(const Bureaucrat &s);
        ~Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            public:
                const char*    what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char*   what() const throw();
        };
        std::string getName() const;
        int getGrade() const;
        void    incrementing();
        void    decrementing();
        void    signForm(Form &a);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &a);

#endif