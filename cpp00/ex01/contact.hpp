/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:47:29 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/18 15:22:44 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
# define Contact_HPP

# include <iostream>
# include <iomanip>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void    setfirtsname(std::string firstname);
        void    setlastsname(std::string lastname);
        void    setphonenumber(std::string phonenumber);
        void    setnickname(std::string nickname);
        void    setdarkestsecret(std::string darkestsecret);
        std::string getfirstname();
        std::string getlastname();
        std::string getphonenumber();
        std::string getnickname();
        std::string getdarkestsecret();
};

#endif