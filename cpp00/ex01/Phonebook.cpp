#include "Phonebook.hpp"
#include <fstream>

void    phonebook::add(int i)
{
    std::string s;

    while(1)
    {
        std::cout << "Firstname : " ;
        getline(std::cin , s);
        if(s.size() == 0)
            continue;
        break ;
    }
    cont[i % 8].setfirtsname(s);
    while (1)
    {
        std::cout << "Lastname : ";
        getline(std::cin , s);
        if(s.size() == 0)
            continue;
        break ;
    }
    cont[i % 8].setlastsname(s);
    while (1)
    {
        std::cout << "nickname : ";
        getline(std::cin , s);
        if(s.size() == 0)
            continue;
        break ;
    }
    cont[i % 8].setnickname(s);
    while (1)
    {
        std::cout << "Phonenumber : ";
        getline(std::cin , s);
        if(s.size() == 0)
            continue;
        break ;
    }
    cont[i % 8].setphonenumber(s);
    while (1)
    {
        std::cout << "DarkestSecret : ";
        getline(std::cin , s);
        if(s.size() == 0)
            continue;
        break ;
    }
    cont[i % 8].setdarkestsecret(s);
}

void    phonebook::search(int nmbr_cont)
{
    int i, j;
    std::string  index;

    while (1)
    {
        std::cout << "*  Index  |  First Name|  Last Name| Nick Name *" << std::endl;
        for(i = 0; i < nmbr_cont; i++)
        {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << ft_string(cont[i].getfirstname())  << "|";
            std::cout << std::setw(10) << ft_string(cont[i].getlastname()) << "|";
            std::cout << std::setw(10) << ft_string(cont[i].getnickname()) << "\n";
        }
        while(1)
        {
             std::cout << "Enter a valid index" << std::endl;
             getline(std::cin , index);
             j = index[0] - 48;
             if (j >= nmbr_cont)
                 std::cout << "Wrong index\n" << std::endl;
             else{
                 std::cout << "First Name : " << cont[j].getfirstname() << "\n";
                 std::cout << "Last Name : " << cont[j].getlastname() << "\n";
                 std::cout << "Nick Name : " << cont[j].getnickname() << "\n";
                 std::cout << "Phone Number : " << cont[j].getphonenumber() << "\n";
                 std::cout << "Darkest Secret : " << cont[j].getdarkestsecret() << "\n";
                break;
                }
        }
        break ;
    }
}