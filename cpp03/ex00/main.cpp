#include "ClapTrap.hpp"


int main()
{
    ClapTrap a("sidi");
    ClapTrap b("simo");
    a = b;
    a.attack("ahmed");
    a.takeDamage(5);
    a.beRepaired(5);
    b.attack("zak");
} 