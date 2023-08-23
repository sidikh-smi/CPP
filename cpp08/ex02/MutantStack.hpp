#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>

#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack() {}
    MutantStack(const MutantStack& a) : std::stack<T>()
    {
        this->c = a.c;
    }
    MutantStack& operator=(const MutantStack& a)
    {
        if(this != a)
            this->c = a.c;
        return *this;
    }
    ~MutantStack(){}
    iterator begin()
    {
        return(this->c.begin());
    }
    iterator end()
    {
        return(this->c.end());
    }
};

#endif