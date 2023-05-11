#include "zombie.hpp"

zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    zombie *z = new zombie[N];
    while(i < N)
    {
        z[i].setname(name);
        i++;
    }
    return (z);
}