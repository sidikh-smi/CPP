#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class zombie{
    private:
        std::string name;
    public:
        zombie();
        ~zombie();
        void setname(std::string name);
        void annonce();
};

zombie* zombieHorde( int N, std::string name );

#endif