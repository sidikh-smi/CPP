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
    // std::cout << vector.back() << std::endl;
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
        j += 2;
    }
    vector.clear();
    std::vector<unsigned int> smalest;
    for(std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pairv.begin(); it < pairv.end(); it++)
    {
        unsigned int a;
        a = it->first;
        smalest.push_back(a);
    }
    std::vector<unsigned int> largest;
    for(std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pairv.begin(); it < pairv.end(); it++)
    {
        unsigned int b;
        b = it->second;
        largest.push_back(b);
    }
    std::sort(smalest.begin(), smalest.end());
    std::vector<unsigned int>::iterator q;
    for (std::vector<unsigned int>::iterator it = largest.begin(); it < largest.end(); it++)
    { 
        q = std::lower_bound(smalest.begin(), smalest.end(), *it);
        smalest.insert(q, *it);
    }
    for (std::vector<unsigned int>::iterator it = smalest.begin(); it < smalest.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}