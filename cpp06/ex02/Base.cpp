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
            return new A();
    }
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "Identifie is a pointer of A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identifie is a pointer of B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "Identifie is a pointer of C" << std::endl;
}

void identify(Base& p)
{
    try{
       (void)dynamic_cast<A&>(p);
        std::cout << "Identifie is a reference of A" << std::endl;
    }
    catch(...)
    {
    }
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "Identifie is a reference of B" << std::endl;
    }
    catch(...)
    {
    }
    try{
         (void)dynamic_cast<C&>(p);
        std::cout << "Identifie is a reference of C" << std::endl;
    }
    catch(...){
    }
}