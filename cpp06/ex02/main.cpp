#include "Base.hpp"

int main()
{
    Base *s = generate();
    Base &a = *s;

    std::cout << "Identifier For pointer : \n";
    identify(s);
    std::cout << "Identifier For reference : \n";
    identify(a);
}
