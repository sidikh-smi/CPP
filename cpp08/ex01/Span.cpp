#include "Span.hpp"

Span::Span()
{
}

Span::Span(int i)
{
    N = i;
    index = 0;
}

Span::Span(const Span &a)
{
    *this = a;
}

Span& Span::operator=(const Span &a)
{
    if(this != &a)
    {
        myarray = a.myarray;
        N = a.N;
        index = a.index;
    }
    return *this;
}

Span::~Span()
{
}

void    Span::addNumber(int i)
{
    if(index < N)
    {
        myarray.push_back(i);
        index++;
    }
    else
        throw std::exception();
}

int Span::longestSpan()
{
    if(myarray.empty())
        throw std::exception();
    std::sort(myarray.begin(), myarray.end());
    int a =  myarray.back() - myarray.front();
    return a;
}

int Span::shortestSpan()
{
    if(myarray.empty() || !myarray.end())
        throw std::exception();
    std::sort(myarray.begin(), myarray.end());
    std::vector<int>::iterator it = myarray.begin();
    int a = *(it + 1) - *it;
    for( it = it + 1; it != myarray.end(); it++)
    {
        int p = *(it + 1) - *it;
        if(p < a)
            a = p;
    }
    return a;
}