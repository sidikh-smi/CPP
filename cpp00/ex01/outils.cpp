/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:11:26 by skhaliff          #+#    #+#             */
/*   Updated: 2023/04/27 16:49:48 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "contact.hpp"

std::string ft_string(std::string str)
{
    std::string c;

    c = str.substr(0, 10);
    c[9] = '.';
    return(c);
}

void    contact::setfirtsname(std::string firstname)
{
    this->first_name = firstname;
}

void    contact::setlastsname(std::string lastname)
{
    this->last_name = lastname;
}

void    contact::setnickname(std::string nickname)
{
    this->nick_name = nickname;
}

void    contact::setphonenumber(std::string phonenumber)
{
    // int i = 0;
    // while (phonenumber[i])
    // {
    //     if (phonenumber[i] < '0' || phonenumber[i] > '9')
    //     {
    //         std::cout << "invalid number" << std::endl;
    //         exit(0);
    //     }
    //     i++;
    // }
    this->phone_number = phonenumber;
}

void    contact::setdarkestsecret(std::string darkestname)
{
    this->darkest_secret = darkestname;
}

std::string contact::getfirstname()
{
    return(this->first_name);
}

std::string contact::getlastname()
{
    return(this->last_name);
}

std::string contact::getnickname()
{
    return(this->nick_name);
}

std::string contact::getphonenumber()
{
    return(this->phone_number);
}

std::string contact::getdarkestsecret()
{
    return(this->darkest_secret);
}
