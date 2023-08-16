#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include<cstdlib>


template<typename T>
class Array
{
    private :
        T *a;
        int sizes;
    public:
        Array(): a(NULL) , sizes(0)
        {
            std::cout<< "default" << std::endl;
        }
        Array(int n)
        {
            if(n > 0)
                sizes = n;
            else
                throw ;
           // std::cout << "from here" << std::endl;
            a = new T[sizes];
        }
        Array(const Array& s)
        {
            std::cout << "hello\n";
            sizes  = s.sizes;
            a = new T[sizes];
            for(int i = 0; i < sizes; i++)
                a[i] = s.a[i];
        }
        Array& operator=(const Array& s)
        {
            // std::cout << sizes << std::endl;
            std::cout <<"-->"<< this->a << std::endl;
            if(a)
                delete[] a;
            sizes  = s.sizes;
            a = new T[sizes];
            for(int i = 0; i < sizes; i++)
                a[i] = s.a[i];
            return (*this);
        }
        int& operator[](int l)
        {
            if(l >= sizes || l < 0)
            {
                std::cout << "exception\n";
                throw std::exception();
            }
            return (a[l]);
        }
        ~Array()
        {
            if(a)
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