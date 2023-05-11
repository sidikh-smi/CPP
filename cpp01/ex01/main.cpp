#include "zombie.hpp"

int main()
{
    int N = 4;
    zombie *z = zombieHorde(N, "simo");
    int i = 0;
    while (i < N)
    {
        z[i].annonce();
        i++;
    }
    delete[] z;
   // system("leaks zombie");
}