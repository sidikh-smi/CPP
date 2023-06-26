/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:26 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/25 13:32:59 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
    target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t): AForm("ShrubberyCreationForm", 145, 137)
{
    target = t;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void    ShrubberyCreationForm::execute(Bureaucrat const &a) const
{
    if(getSigned())
    {
        if (a.getGrade() < getGrade())
        {
            std::string file_name = target + "_shrubbery";
            std::ofstream out_filename(file_name);
            if (!out_filename.is_open())
            {
                std::cout << "Error in creation of filename" << std::endl;
                return ;
            }
            out_filename << "       ccee88oo\n";
            out_filename << "    C8O8O8Q8PoOb o8oo\n";
            out_filename << " dOB69QO8PdUOpugoO9bD\n";
            out_filename << "CgggbU8OU qOp qOdoUOdcb\n";
            out_filename << "      8OuU  /p u gcoUodpP\n";
            out_filename << "        \\\\//  /douUP\n";
            out_filename << "          \\////\n";
            out_filename << "            |||\n";
            out_filename << "            |||\n";
            out_filename << "            |||\n";
            out_filename.close();
            std::cout << "file created" << std::endl;
        }
    }
    else
        throw AForm::GradeTooLowException();
}