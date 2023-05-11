#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon& weaponA;
    public :
        void    attack();
        HumanA(std::string n, Weapon& w) : name(n), weaponA(w){}
        ~HumanA();
};

#endif