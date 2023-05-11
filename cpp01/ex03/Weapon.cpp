#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    str = name;
    std::cout << "Consractor created " << std::endl;
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string name)
{
    str = name;
}

const std::string& Weapon::getType()
{
    return(str);
}