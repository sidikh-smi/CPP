#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

uintptr_t   Serializer::serialize(Data* s)
{
    uintptr_t   ad = reinterpret_cast<uintptr_t>(s);
    return ad;
}

Data* Serializer::deserialize(uintptr_t s)
{
    return reinterpret_cast<Data*>(s);
}
