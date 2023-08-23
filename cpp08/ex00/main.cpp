#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> v;
    for(int i = 0; i < 10; i++)
        v.push_back(i);
    easyfind(v, 1);
    easyfind(v, 0);
    easyfind(v, 11);
    easyfind(v, -1);
}