#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private :
        T *a;
        int size;
    public:
        Array(): a(NULL) , size(0){}
        Array(int n){
            if(n > 0)
                size = n;
            else
                throw ;
            a = new T[size];
        }
        Array(const Array& s){
            
        }
        ~Array(){
            delete[] a;
        }
        int size() const {
            int  i = 0;
            while (a[i])
                i++;
            return (i);
        }
};

#endif