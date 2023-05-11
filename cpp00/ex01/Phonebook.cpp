#include "Phonebook.hpp"

void    phonebook::add(int i)
{
    std::string s;

    while(1)
    {
        std::cout << "Firstname : " ;
        std::cin >> s ;
        break ;
    }
    cont[i % 8].setfirtsname(s);
    while (1)
    {
        std::cout << "Lastname : ";
        std::cin >> s;
        break ;
    }
    cont[i % 8].setlastsname(s);
    while (1)
    {
        std::cout << "nickname : ";
        std::cin >> s;
        break ;
    }
    cont[i % 8].setnickname(s);
    while (1)
    {
        std::cout << "Phonenumber : ";
        std::cin >> s;
        break ;
    }
    cont[i % 8].setphonenumber(s);
    while (1)
    {
        std::cout << "DarkestSecret : ";
        std::cin >> s;
        break ;
    }
    cont[i % 8].setdarkestsecret(s);
}

void    phonebook::search(int nmbr_cont)
{
    int i;
    int index;

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
             std::cin >> index;
             if (index >= nmbr_cont)
                 std::cout << "Wrong index\n" << std::endl;
             else{
                 std::cout << "First Name : " << cont[index].getfirstname() << "\n";
                 std::cout << "Last Name : " << cont[index].getlastname() << "\n";
                 std::cout << "Nick Name : " << cont[index].getnickname() << "\n";
                 std::cout << "Phone Number : " << cont[index].getphonenumber() << "\n";
                 std::cout << "Darkest Secret : " << cont[index].getdarkestsecret() << "\n";
                break;
                }
        }
        break ;
    }
}