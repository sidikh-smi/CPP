#include <iostream>
#include <map>
#include <fstream>
#include <fcntl.h>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <algorithm>

std::map<std::string, std::string> data;

void check_line(std::string line)
{
    const char *s2;
    int pos2;
    std::string s;
    char *t;
    int year = 0;
    int month = 0;
    int day = 0;
    size_t i = 0;

    if (!line.empty())
    {
        i = line.find_first_not_of("1234567890-|. ");
        if(i != std::string::npos)
        {
            std::cout << "non valid argument" << std::endl;
            return;
        }
        s2 = std::strrchr(line.c_str(), '|');
        if (!s2)
        {
            std::cout << "error\n";
            return ;
        }
        pos2 = s2 - line.c_str();
        // std::cout << pos2 << std::endl;
        if ((line[pos2 - 1] != ' ' || line[pos2 + 1] != ' ') || (line[pos2 - 2] == ' ' || line[pos2 + 2] == ' '))
        {
            std::cout << "error format" << std::endl;
            return;
        }
    }
    s = line.substr(0, pos2);
    // std::cout << s << std::endl;
    t = strtok((char *)s.c_str(), "-");
    while (t != NULL)
    {
        if(!year)
        {
            if(strlen(t) != 4)
            {
                std::cout << "error in year" << std::endl;
                return;
            }
            year = atoi(t);
            t = strtok(NULL, "-");
            // std::cout << "year = " << year << std::endl;
            continue;
        }
        if(!month)
        {
            if(strlen(t) != 2)
            {
                std::cout << "error in month" << std::endl;
                return;
            }
            month = atoi(t);
            t = strtok(NULL, "-");
            // std::cout << "month = " << month << std::endl;
            continue;
        }
        if(!day)
        {
            if(strlen(t) != 3)
            {
                std::cout << "error in day" << std::endl;
                return;
            }
            day = atoi(t);
            t = strtok(NULL, "-");
            // std::cout << "day = " << day << std::endl;
            continue;
        }
    }
    // std::cout << "year = " << year << " month = " << month << " day = "  << day << std::endl;
    if(year < 2009)
    {
        std::cout << "error with year" << std::endl;
        return ;
    }
    else if(month > 12)
    {
        std::cout << "error with month" << std::endl;
        return;
    }
    else if(day > 31)
    {
        std::cout << "error with day" << std::endl;
        return;
    }
    std::string n = line.substr(pos2 + 2);
    size_t j = std::count(n.begin(), n.end(), '.');
    if(j > 1)
    {
        std::cout << "error with format1" << std::endl;
        return;
    }
    // std::cout << n << std::endl;
    if(n.find('-') != std::string::npos)
    {
        std::cout << "Number non positive" << std::endl;
        return;
    }
    double value = atof(n.c_str());
    // std::cout << value << std::endl;
    std::string date = line.substr(0, pos2 - 1);
    // std::cout << date.size() << std::endl;
    // std::map<std::string, std::string>::iterator it = data.find(date);
    // std::cout << data[date] << std::endl;
    if(data.find(date) != data.end())
    {
        value *= atof(data[date].c_str());
        std::cout << value << std::endl;
    }
}

int main(int argc, char **argv)
{
    std::ifstream file_input(argv[1]);
    if (argc != 2)
    {
        std::cout << "error with number of argument" << std::endl;
        return 1;
    }
    else
    {
        std::ifstream file("/nfs/homes/skhaliff/Desktop/CPP/cpp09/ex00/data.csv");
        if (!file.is_open())
        {
            std::cout << "error with opening file\n";
            return 1;
        }
        // std::map<std::string, std::string> data;
        std::string line;
        const char *s;
        int pos;
        while (std::getline(file, line))
        {
            if (!line.empty())
            {
                s = std::strrchr(line.c_str(), ',');
                pos = s - line.c_str();
                data[line.substr(0, pos)] = line.substr(pos + 1);
            }
        }
        std::string line2;
        const char *s2;
        int pos2;
        int i = 0;
        // std::cout << data["2022-03-29"] << std::endl;
        while (std::getline(file_input, line2))
        {
            if (!line2.empty() && !i)
            {
                s2 = std::strrchr(line2.c_str(), '|');
                if (!s2)
                {
                    std::cout << "error\n";
                    return 1;
                }
                pos2 = s2 - line2.c_str();
                // std::cout << pos2 << std::endl;
                if (line2[pos2 - 1] != ' ' || line2[pos2 + 1] != ' ')
                {
                    std::cout << "error format" << std::endl;
                    return 1;
                }
                i = 1;
            }
            else if(i)
                check_line(line2);
            else
            {
                std::cout << "Empty Line" << std::endl;
                return 1;
            }  
        }
    }
}