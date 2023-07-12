#include "Base.hpp"

int main()
{
    Base *s = generate();
    Base &a = *s;
    identify(a);
}