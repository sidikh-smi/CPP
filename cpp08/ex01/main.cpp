#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    Span b;
    b = sp;

    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
    // std::cout << "hello\n";
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    std::vector<int> a;

    a.push_back(5);
    a.push_back(50);
    // a.push_back(500);
    // a.push_back(5000);
    // a.push_back(50000);
    std::vector<int>::iterator ite;
    std::vector<int>::iterator it;
    sp.add_range_iterator(a.begin(), a.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}