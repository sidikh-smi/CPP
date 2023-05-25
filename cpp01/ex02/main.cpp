/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:40 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 00:32:17 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address : " << std::endl;
    std::cout << "String : " << &str << std::endl;
    std::cout << "StringPTR : " << stringPTR << std::endl;
    std::cout << "StringREF : " << &stringREF << std::endl;
    std::cout << "Values : " << std::endl;
    std::cout << "String : " << str << std::endl;
    std::cout << "StringPTR : " << *stringPTR << std::endl;
    std::cout << "StringREF : " << stringREF << std::endl;
}