#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string s)
{
    weaponB = NULL;
    name = s;
}

HumanB::~HumanB()
{

}

void    HumanB::attack()
{
    if (weaponB != NULL)
        std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
    else
        std::cout << name << " Has no weapon " << std::endl;
}

void    HumanB::setWeapon(Weapon& w)
{
    weaponB = &w;
}