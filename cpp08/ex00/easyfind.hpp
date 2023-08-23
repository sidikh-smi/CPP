#ifndef EASTFIND_HPP
#define EASTFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
void    easyfind(T &s, int i)
{
    typename T::iterator found;

    found = std::find(s.begin(), s.end(), i);
    if(found != s.end())
        std::cout << *found << std::endl;
    else
        std::cout << "I didn't find what you want!!!" << std::endl;
}

#endif