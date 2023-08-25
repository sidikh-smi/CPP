#ifndef BTC_HPP
#define BTC_HPP


#include <iostream>
#include <map>
#include <fstream>
#include <fcntl.h>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <algorithm>

class Btc
{
    private :
        std::map<std::string, std::string> data;
    public:
        Btc();
        Btc(const Btc& a);
        Btc& operator=(const Btc& a);
        ~Btc();
        void check_data(std::string a);
        bool check_input(std::string a);
        void check_line(std::string line);
        
};

#endif