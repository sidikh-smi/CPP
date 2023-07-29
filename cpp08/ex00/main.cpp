#include "easyfind.hpp"
#include <array>

int main()
{
    std::array<int, 10> myarray= {1, 2, 3, 4, 55, 6, 7, 8, 9, 10};

    // int i = 0;

    // while (i < 10)
    // {
    //     myarray.push_back(i);
    //     std::cout << myarray[i];
    //     i++;
    // }
    easyfind(myarray, 55);
}