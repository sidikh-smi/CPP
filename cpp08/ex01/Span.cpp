#include "Span.hpp"

Span::Span(): N(0), index(0) {}

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
    if(myarray.size() < 2)
        throw std::exception();
    std::sort(myarray.begin(), myarray.end());
    int a =  myarray.back() - myarray.front();
    return a;
}

int Span::shortestSpan()
{
    if(myarray.size() < 2)
        throw std::exception();
    std::sort(myarray.begin(), myarray.end());
    std::vector<int>::iterator it = myarray.begin();
    int a = *(it + 1) - *it;
    for( it = it + 1; it < myarray.end() - 1; it++)
    {
        int p = *(it + 1) - *it;
        if(p < a)
            a = p;
    }
    return a;
}

void Span::add_range_iterator(std::vector<int>::iterator it, std::vector<int>::iterator its)
{
    std::vector<int>::iterator it1 = it;
    std::vector<int>::iterator its1 = its;
    size_t i = 0;

    while (it1 != its1)
    {
        i++;
        it1++;
    }
    if(i > N - this->myarray.size())
    {
        std::cout << "exception ";
        throw std::exception();
    }
    while(it != its)
    {
        this->myarray.push_back(*it);
        it++;
    }
}