/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/06/25 10:53:56 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private :
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string t);
        //ShrubberyCreationForm(const ShrubberyCreationForm &a);
        //ShrubberyCreationForm operator=();
        ~ShrubberyCreationForm();
        void    execute(Bureaucrat const &executor) const;
};

#endif