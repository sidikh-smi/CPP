#include "zombie.hpp"

zombie::zombie()
{
    std::cout << "welcome!!!" << std::endl;
}

zombie::~zombie()
{
    std::cout << "Bye!!!" << std::endl;
}

void zombie::setname(std::string n)
{
    name = n;
}

void zombie::annonce()
{
    std::cout << name << " : Brainzzzzz....." << std::endl;
}