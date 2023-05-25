/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:11:26 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/18 15:22:44 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string ft_string(std::string str)
{
    std::string c;

    c = str.substr(0, 10);
    c[9] = '.';
    return(c);
}

void    Contact::setfirtsname(std::string firstname)
{
    first_name = firstname;
}

void    Contact::setlastsname(std::string lastname)
{
    last_name = lastname;
}

void    Contact::setnickname(std::string nickname)
{
    nick_name = nickname;
}

void    Contact::setphonenumber(std::string phonenumber)
{
    phone_number = phonenumber;
}

void    Contact::setdarkestsecret(std::string darkestname)
{
    darkest_secret = darkestname;
}

std::string Contact::getfirstname()
{
    return(first_name);
}

std::string Contact::getlastname()
{
    return(last_name);
}

std::string Contact::getnickname()
{
    return(nick_name);
}

std::string Contact::getphonenumber()
{
    return(phone_number);
}

std::string Contact::getdarkestsecret()
{
    return(darkest_secret);
}
