#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> num;

    num.push_back(1);
    num.push_back(2);
    num.push_back(3);

    easyfind(num, 4);
}