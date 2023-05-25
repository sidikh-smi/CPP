/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:33 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/18 15:22:44 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook{
    Contact cont[8];
    public:
        void add(int i);
        void search(int nmbr_cont);
};

std::string ft_string(std::string str);

#endif