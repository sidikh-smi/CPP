#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    int i = 1;
    std::vector<unsigned int> vector;
    while (argv[i])
    {
        int a = std::atoi(argv[i]);
        if(a < 0)
        {
            std::cout << "Error negative number" << std::endl;
            return 1;
        }
        else
            vector.push_back(a);
        i++;
    }
    std::cout << vector.back() << std::endl;
    std::vector<std::pair<unsigned int, unsigned int > > pairv;
    size_t j = 0;
    while(j < vector.size())
    {
        std::pair<unsigned int, unsigned int> p;
        p.first = vector.at(j);
        p.second = vector.at(j + 1);
        if(p.first > p.second)
            std::swap(p.first, p.second);
        pairv.push_back(p);
        vector.erase(vector.begin(), vector.begin() + 1);
        j += 2;
    }
}