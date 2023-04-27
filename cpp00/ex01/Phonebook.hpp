/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:33 by skhaliff          #+#    #+#             */
/*   Updated: 2023/04/27 16:50:38 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class phonebook{
    public:
        contact cont[8];
        void add(int i);
        void search(int nmbr_cont);
       // exit(void);
};

std::string ft_string(std::string str);

#endif