/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 05:55:20 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/18 23:32:15 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

//#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm{
    private:
         std::string name;
        bool _signed;
         int i;
         int grade;
    public:
        AForm();
        AForm(std::string n, int j, int l);
        AForm(const AForm &a);
        AForm &operator=(const AForm& a);
        virtual ~AForm();
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
        virtual void    execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& a);

#endif