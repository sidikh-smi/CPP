#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA(std::string n, Weapon& weapons)
// {
//     name = n;
//     weaponA = weapons;
//    //std::cout << name << "attacks with their " << weaponA.str << std::endl;
// }

HumanA::~HumanA()
{

}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}