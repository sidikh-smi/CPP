/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 05:55:20 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/17 10:55:48 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

//#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form{
    private:
        const std::string name;
        bool _signed;
        const int i;
        const int grade;
    public:
        Form();
        Form(int n, int j);
        Form(std::string n, int j, int l);
        Form(const Form &a);
        Form &operator=(const Form& a);
        ~Form();
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
        bool getSigned() const;
        int getGradeToSigne() const;
        int getGrade() const;
        void    beSigned(Bureaucrat a);
};

std::ostream& operator<<(std::ostream& os, const Form& a);

#endif