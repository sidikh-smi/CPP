#ifndef SPAN_CPP
#define SPAN_CPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> myarray;
        int N;
        int index;
    public:
        Span();
        Span(int n);
        Span(const Span &a);
        Span& operator=(const Span &a);
        ~Span();
        void    addNumber(int i);
        int shortestSpan();
        int longestSpan();
        void    add_range_iterator(std::vector<int>::iterator it, std::vector<int>::iterator its);
};

#endif