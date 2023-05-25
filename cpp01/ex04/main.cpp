/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:00 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/20 01:25:34 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error there must be Four parameters " << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream input_filename(filename);
    if (!input_filename.is_open())
    {
        std::cout << "Error the input file are not open!!! " << std::endl;
        return 1;
    }
    std::ofstream output_filename(filename + ".replace");
    if (!output_filename.is_open())
    {
        std::cout << "Error the output file are not created!!! " << std::endl;
        return 1;
    }
    std::string str;
    bool a;
    a = std::getline(input_filename, str);
    while(a)
    { 
        size_t pos = 0;
        if (!s1.empty())
        {
            while((pos = str.find(s1, pos) ) != std::string::npos)
            {
                str.erase(pos, s1.length());
                str.insert(pos, s2);
                pos += s2.length();
            }
        }
        output_filename << str;
        a = std::getline(input_filename, str);
        if(a)
            output_filename << std::endl;
    }
}