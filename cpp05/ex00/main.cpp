/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:52:42 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/21 06:56:02 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("sidi", 150);
    try
    {
    	b.decrementing();
        // if (b.getGrade() < 1)
        //     throw Bureaucrat::GradeTooHighException();
        // else if (b.getGrade() > 150)
        //     throw Bureaucrat::GradeTooLowException();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
