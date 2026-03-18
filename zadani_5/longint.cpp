// Dias Nurgaliyev 39994

#include "longint.h"
#include <iostream>

void LongInt::copy(long long h)
{
    hodnota = h;
}

void LongInt::clear()
{
    hodnota = 0;
}

LongInt::LongInt()              { clear(); }
LongInt::LongInt(int i)         { copy(i); }
LongInt::LongInt(const LongInt& l) { copy(l.hodnota); }
LongInt::~LongInt()             { clear(); }

LongInt& LongInt::operator=(const LongInt& l)
{
    copy(l.hodnota);
    return *this;
}

LongInt& LongInt::operator=(int i)
{
    copy(i);
    return *this;
}

long long LongInt::get() const { return hodnota; }

void LongInt::vypis() const
{
    std::cout << hodnota << std::endl;
}
