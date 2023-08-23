#include "iter.hpp"

template<typename T, typename f>
f    print_s(T a)
{
    std::cout << a << std::endl;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    // char c[] = {'a', 'b', 'c', 'd'};

    // iter(c, 4, print_s);
    iter(a, 4, print_s);
}
