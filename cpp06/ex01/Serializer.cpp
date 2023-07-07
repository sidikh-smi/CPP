#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

uintptr_t   Serializer::serialize(Data* s)
{
    uintptr_t   ad = reinterpret_cast<uintptr_t>(s->a);
    return ad;
}

Data* Serializer::deserialize(uintptr_t s)
{
    Data *q = new Data();

    q->a = reinterpret_cast<int*>(s);
    return q;
}