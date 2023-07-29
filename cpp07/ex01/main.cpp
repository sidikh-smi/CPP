#include "iter.hpp"

template<typename T>
void    print_s(T a)
{
        std::cout <<a<< " ";
}

int main()
{
    //int a[] = {1, 2, 3, 4};
    char c[] = {'a', 'b', 'c', 'd'};

    iter(c, 4, print_s<char>);
    std::cout << std::endl;
}


