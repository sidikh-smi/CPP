/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:52:42 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/20 06:56:07 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("sidi", 150);
    Form a("ahmed", 150, 149);
    b.incrementing();
    try
    {
        if (b.getGrade() < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (b.getGrade() > 150)
            throw Bureaucrat::GradeTooHighException();
        b.signForm(a);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
