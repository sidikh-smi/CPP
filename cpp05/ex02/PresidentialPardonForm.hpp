/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:53:18 by skhaliff          #+#    #+#             */
/*   Updated: 2023/07/17 04:59:12 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string t);
        PresidentialPardonForm(const PresidentialPardonForm &a);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &a);
        ~PresidentialPardonForm();
        void    execute(Bureaucrat const &executor) const;
};

#endif