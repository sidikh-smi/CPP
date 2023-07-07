#include "Serializer.hpp"

int main()
{
    Serializer v;
    Data *s = new Data();
    int i = 5;
    s->a = &i;

    std::cout << "Before : " << i << std::endl;
    std::cout << "Before : " << &i << std::endl;
    std::cout << "Serializer : " << v.serialize(s) << std::endl;
    int *x = reinterpret_cast<int*>(v.serialize(s));
    std::cout << "After : " << *x << std::endl;
    std::cout << "Deselizer : " << v.deserialize(v.serialize(s)) << std::endl;
}