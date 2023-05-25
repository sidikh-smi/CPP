/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:26 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/18 15:22:44 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone;
    std::string s;
    int i = 0;
    int nmbr_cont = 0;
    
    while (1)
    {
        std::cout << "          MENU         " << std::endl;
        std::cout << "1. ADD " << std::endl;
        std::cout << "2. SEARCH " << std::endl;
        std::cout << "3. EXIT " << std::endl;
        while (1)
        {
            getline(std::cin , s);
            if (std::cin.eof())
            {
                std::cout << "Bye!!!" << std::endl;
                exit(0);
            }
            if (!s.compare("ADD"))
            {
                std::cout << "Add Contact " << std::endl;
                phone.add(i);
                if (nmbr_cont < 8)
                    nmbr_cont++;
                i++;
                break ;
            }
            else if (!s.compare("SEARCH"))
            {
                std::cout << "Search Contact " << std::endl;
                phone.search(nmbr_cont);
                break ;
            }
            else if (!s.compare("EXIT"))
                exit (0);
            else
                std::cout << "Invalid Input" << std::endl;
        }
    }
}