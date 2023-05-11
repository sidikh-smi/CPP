#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon{
    private :
        std::string str;
    public :
       const std::string& getType();
       void  setType(std::string type);
       Weapon(std::string name);
       ~Weapon();
};

#endif