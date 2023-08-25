#include "Btc.hpp"

Btc::Btc()
{
}

Btc::Btc(const Btc &a)
{
    data = a.data;
}

Btc &Btc::operator=(const Btc &a)
{
    if(this != &a)
        data = a.data;
    return *this;
}

Btc::~Btc()
{
}

void Btc::check_data(std::string path)
{
    std::ifstream file(path.c_str());
    if (!file.is_open())
    {
        std::cout << "error with opening file\n";
        return;
    }
    std::string line;
    const char *s;
    int pos;
    while (std::getline(file, line))
    {
        if (!line.empty())
        {
            s = std::strrchr(line.c_str(), ',');
            if(!s)
            {
                std::cout << "error" << std::endl;
                return ;
            }
            pos = s - line.c_str();
            data[line.substr(0, pos)] = line.substr(pos + 1);
        }
    }
}

bool Btc::check_input(std::string line)
{
    // if (!path_input.is_open())
    // {
    //     std::cout << "error with opening file\n";
    //     return;
    // }
    // std::string line2;
    const char *s2;
    int pos2;
    size_t i = 0;
    // while (std::getline(file_input, line2))
    // {
        if (!line.empty() && !isdigit(line[0]))
        {
            i = line.find_first_not_of("datevalue| ");
            if(i != std::string::npos)
                return false;
            s2 = std::strrchr(line.c_str(), '|');
            // std::cout << s2 + 2 << std::endl;
            if (!s2)
            {
                // std::cout << "error" << std::endl;
                return false;
            }
            pos2 = s2 - line.c_str();
            // std::cout << line[pos2] << std::endl;
            // std::cout << pos2 << std::endl;
            if ((line[pos2 - 1] != ' ' || line[pos2 + 1] != ' ') || (line[pos2 - 2] == ' ' || line[pos2 + 2] == ' '))
            {
                // std::cout << "error format" << std::endl;
                return false;
            }
            // i = 1;
        }
        else
            return false;
        // std::cout << "hello\n";
        return true;
        // else if (i)
        //     check_line(line2);
        // else
        // {
        //     std::cout << "Empty Line" << std::endl;
        //     return false;
        // }
}

void Btc::check_line(std::string line)
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
        i = line.find_first_not_of("1234567890-|.+ ");
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
    else if(month == 2 && (day == 31 || day == 30))
    {
        std::cout << "error with february month" << std::endl;
        return ;
    }
    else if(year % 4 != 0 && month == 2)
    {
        if(day == 29)
        {
            std::cout << "error with february month 1" << std::endl;
            return ;
        }
    }
    std::string n = line.substr(pos2 + 2);
    int j = std::count(n.begin(), n.end(), '.');
    if(j > 1 || n[0] == '.' || n[n.size() - 1] == '.')
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
    if(value > 1000)
    {
        std::cout << "error with value" << std::endl;
        return ;
    }
    // std::cout << value << std::endl;
    std::string date = line.substr(0, pos2 - 1);
    int k = std::count(date.begin(), date.end(), '-');
    if(k != 2)
    {
        std::cout << "error with format date" << std::endl;
        return ;
    }
    if(data.find(date) != data.end())
    {
        double values = atof(data[date].c_str()) * value;
        std::cout << date << " => " << value <<" = " << values << std::endl;
    }
    else
    {
        std::map<std::string, std::string>::iterator it = data.lower_bound(date);
        if(it != data.end())
        {
            it--;
            // std::cout << it->first << std::endl;
            double values = atof(it->second.c_str()) * value;
            std::cout << date << " => " << value <<" = " << values << std::endl;
        }
    }
}