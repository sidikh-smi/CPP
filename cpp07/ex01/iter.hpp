#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename F>
void    iter(T *a, int size,  F f(T))
{
    for(int i = 0; i < size; i++)
        f(a[i]);
}

#endif