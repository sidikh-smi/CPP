#include "Base.hpp"

Base::~Base()
{
}

Base *generate()
{
    int i = time(0) % 3;

    switch (i)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return (NULL);
    }
}

void identify(Base* p)
{
    
}

// void identify(Base& p)
// {

// }