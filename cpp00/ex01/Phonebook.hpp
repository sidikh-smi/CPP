#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>

class contact {
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
};

class phonebook{
    contact cont[8];
    void    add(void);
    void    search(void);
    void    exit(void);
};

#endif