#include <iostream>
#include <vector>

class Span
{
    std::vector<int> myarray;
    const int N;
    public:
        int i;
        Span(int i);
        void addNumber(int i);
        void t_it();
        int shortest();
        int longest();
        void    add_range_iterator(std::vector<int>::iterator it, std::vector<int>::iterator its);
};

Span::Span(const int i): N(i), i(0)
{
}

void    Span::addNumber(int a)
{
    //std::cout << i << std::endl;
    if(i < N)
    {
        myarray.push_back(a);
        //std::cout << a << std::endl;
        i++;
    }
    else
        throw std::exception();
}

void Span::t_it()
{   
    std::cout << myarray[0] << std::endl;
    std::cout << myarray[1] << std::endl;
    std::cout << myarray[2] << std::endl;
    std::cout << myarray[3] << std::endl;
    std::cout << myarray[4] << std::endl;
}

int Span::longest()
{
    std::sort(myarray.begin(), myarray.end());
    int a = myarray.back() - myarray.front();
    return a;
}

int Span::shortest()
{
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

void Span::add_range_iterator(std::vector<int>::iterator it, std::vector<int>::iterator its)
{
    it = myarray.begin() + 2;
    its = myarray.end();
    int a = 0;

    while(*it != *its)
    {
        // std::cout << "hello\n";
        *it = a;
        a++;
        it++;
    }
}

int main()
{
    Span sp(5);

    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // std::cout << sp.shortest() << std::endl;
        // std::cout << sp.longest() << std::endl;
        std::vector<int>::iterator it;
        std::vector<int>::iterator its;

        sp.add_range_iterator(it, its);
        sp.t_it();
    }
    catch(...)
    {
        std::cerr <<"errorrr" << '\n';
    }
}