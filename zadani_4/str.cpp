// Dias Nurgaliyev 39994

#include "str.h"
#include <iostream>
#include <cstring>

Str::Str()
{
    data = new char[1];
    data[0] = '\0';
}

Str::Str(const char* s)
{
    data = new char[strlen(s) + 1];
    strcpy(data, s);
}

Str::Str(const Str& s)
{
    data = new char[strlen(s.data) + 1];
    strcpy(data, s.data);
}

Str::~Str()
{
    delete[] data;
}

Str& Str::operator=(const Str& s)
{
    if (this == &s) return *this;
    delete[] data;
    data = new char[strlen(s.data) + 1];
    strcpy(data, s.data);
    return *this;
}

Str& Str::operator=(const char* s)
{
    delete[] data;
    data = new char[strlen(s) + 1];
    strcpy(data, s);
    return *this;
}

const char* Str::get() const
{
    return data;
}

int Str::delka() const
{
    return (int)strlen(data);
}

void Str::vypis() const
{
    std::cout << data << std::endl;
}
