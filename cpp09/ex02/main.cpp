#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>

// int main(int argc, char **argv)
// {
//     if(argc < 2)
//     {
//         std::cout << "Error" << std::endl;
//         return 1;
//     }
//     int i = 1;
//     std::vector<unsigned int> vector;
//     while (argv[i])
//     {
//         int a = std::atoi(argv[i]);
//         if(a < 0)
//         {
//             std::cout << "Error negative number" << std::endl;
//             return 1;
//         }
//         else
//             vector.push_back(a);
//         i++;
//     }
//     int inpair = 0;
//     if (vector.size() % 2 != 0)
//         inpair = vector[vector.size() - 1];
//     std::vector<std::pair<unsigned int, unsigned int > > pairv;
//     size_t j = 0;
//     while(j < vector.size() -  1)
//     {
//         std::pair<unsigned int, unsigned int> p;
//         p.first = vector.at(j);
//         p.second = vector.at(j + 1);
//         if(p.first > p.second)
//             std::swap(p.first, p.second);
//         pairv.push_back(p);
//         j += 2;
//     }
//     vector.clear();
//     std::vector<unsigned int> smalest;
//     for(std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pairv.begin(); it < pairv.end(); it++)
//     {
//         unsigned int a;
//         a = it->first;
//         smalest.push_back(a);
//     }
//     std::vector<unsigned int> largest;
//     for(std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pairv.begin(); it < pairv.end(); it++)
//     {
//         unsigned int b;
//         b = it->second;
//         largest.push_back(b);
//     }
//     std::sort(smalest.begin(), smalest.end());
//     std::vector<unsigned int>::iterator q;
//     for (std::vector<unsigned int>::iterator it = largest.begin(); it < largest.end(); it++)
//     { 
//         q = std::lower_bound(smalest.begin(), smalest.end(), *it);
//         smalest.insert(q, *it);
//     }
//     if(inpair != 0)
//     {
//         q = std::lower_bound(smalest.begin(), smalest.end(), inpair);
//         smalest.insert(q, inpair);
//     }
//     std::cout << "After : ";
//     for (std::vector<unsigned int>::iterator it = smalest.begin(); it < smalest.end(); it++)
//     {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }



int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    int i = 1;
    std::deque<unsigned int> vector;
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
    int inpair = -1;
    if (vector.size() % 2 != 0)
        inpair = vector[vector.size() - 1];
    std::deque<std::pair<unsigned int, unsigned int > > pairv;
    size_t j = 0;
    while(j < vector.size() -  1)
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
    std::deque<unsigned int> smalest;
    for(std::deque<std::pair<unsigned int, unsigned int> >::iterator it = pairv.begin(); it < pairv.end(); it++)
    {
        unsigned int a;
        a = it->first;
        smalest.push_back(a);
    }
    std::deque<unsigned int> largest;
    for(std::deque<std::pair<unsigned int, unsigned int> >::iterator it = pairv.begin(); it < pairv.end(); it++)
    {
        unsigned int b;
        b = it->second;
        largest.push_back(b);
    }
    std::sort(smalest.begin(), smalest.end());
    std::deque<unsigned int>::iterator q;
    for (std::deque<unsigned int>::iterator it = largest.begin(); it < largest.end(); it++)
    { 
        q = std::lower_bound(smalest.begin(), smalest.end(), *it);
        smalest.insert(q, *it);
    }
    if(inpair != -1)
    {
        q = std::lower_bound(smalest.begin(), smalest.end(), inpair);
        smalest.insert(q, inpair);
    }
    std::cout << "After : ";
    for (std::deque<unsigned int>::iterator it = smalest.begin(); it < smalest.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

