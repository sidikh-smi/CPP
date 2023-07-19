#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private :
        T *a;
        int sizes;
    public:
        Array(): a(NULL) , sizes(0){}
        Array(int n)
        {
            if(n > 0)
                sizes = n;
            else
                throw ;
            a = new T[sizes];
        }
        Array(const Array& s)
        {
            *this = s;
        }
        Array& operator=(const Array& s)
        {
            delete[] a;
            sizes  = s.sizes;
            a = new T[sizes];
            for(int i = 0; i < sizes; i++)
                a[i] = s.a[i];
            return (*this);
        }
        int& operator[](int l)
        {
            if(l > sizes)
                throw std::exception();
            return (a[l]);
        }
        ~Array()
        {
            delete[] a;
        }
        int size() const{
            int  i = 0;
            while (a[i])
                i++;
            return (i);
        }
};

#endif