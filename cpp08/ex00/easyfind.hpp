#ifndef EASTFIND_HPP
#define EASTFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
void    easyfind(T &s, int i)
{
    typename T::iterator found;

    found = std::find(s.begin(), s.end(), i);
    std::cout << *found << std::endl;
}

#endif