/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:53:09 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/17 10:18:18 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat{
    private:
        const std::string name;
        int i;
    public :
        Bureaucrat();
        Bureaucrat(int n);
        Bureaucrat(const std::string n, int a);
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
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &a);

#endif