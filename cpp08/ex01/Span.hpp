#ifndef SPAN_CPP
#define SPAN_CPP

#include <iostream>
#include <vector>

class Span
{
    private:
        int N;
        std::vector<int> myarray;
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
        void    add_range_iterator();
};

#endif