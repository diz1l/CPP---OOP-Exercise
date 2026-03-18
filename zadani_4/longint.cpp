// Dias Nurgaliyev 39994

#include "longint.h"
#include <iostream>

LongInt::LongInt()
{
    hodnota = 0;
}

LongInt::LongInt(int i)
{
    hodnota = i;
}

LongInt::LongInt(const LongInt& l)
{
    hodnota = l.hodnota;
}

LongInt::~LongInt()
{
    // zadna dynamicka pamet v teto verzi
}

LongInt& LongInt::operator=(const LongInt& l)
{
    hodnota = l.hodnota;
    return *this;
}

LongInt& LongInt::operator=(int i)
{
    hodnota = i;
    return *this;
}

long long LongInt::get() const
{
    return hodnota;
}

void LongInt::vypis() const
{
    std::cout << hodnota << std::endl;
}
