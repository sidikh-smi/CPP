#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class Pmerge
{
    public:
        Pmerge();
        Pmerge(const Pmerge &a);
        Pmerge& operator=(const Pmerge &a);
        ~Pmerge();
        void    mergeVector();
        void    mergeDeque();
};

#endif