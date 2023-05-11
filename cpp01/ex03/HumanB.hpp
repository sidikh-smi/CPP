#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon* weaponB;
    public :
        void    attack();
        void    setWeapon(Weapon& w);
        HumanB(std::string s);
        ~HumanB();
};

#endif