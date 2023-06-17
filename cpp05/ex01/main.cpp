/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:52:42 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/17 10:43:07 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("sidi", 150);
    Form a("ahmed", 2, 45);
    //b.incrementing();
    try
    {
        // if (b.getGrade() < 1)
        //     throw Bureaucrat::GradeTooLowException();
        // else if (b.getGrade() > 150)
        //     throw Bureaucrat::GradeTooHighException();
        b.signForm(a);
        // std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}