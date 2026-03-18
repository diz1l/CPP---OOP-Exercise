// Dias Nurgaliyev 39994

#include "str.h"
#include <iostream>
#include <cstring>

void Str::copy(const char* s)
{
    if (s == 0) s = "";
    data = new char[strlen(s) + 1];
    strcpy(data, s);
}

void Str::clear()
{
    delete[] data;
    data = 0;
}

Str::Str()
{
    data = new char[1];
    data[0] = '\0';
}

Str::Str(const char* s)
{
    if (s == 0) s = "";
    copy(s);
}

Str::Str(const Str& s)
{
    copy(s.data);
}

Str::~Str()
{
    clear();
}

Str& Str::operator=(const Str& s)
{
    if (this == &s) return *this;
    clear();
    copy(s.data);
    return *this;
}

Str& Str::operator=(const char* s)
{
    if (s == 0) s = "";
    clear();
    copy(s);
    return *this;
}

Str Str::operator+(const Str& s) const
{
    char* tmp = new char[strlen(data) + strlen(s.data) + 1];
    strcpy(tmp, data);
    strcat(tmp, s.data);
    Str result(tmp);
    delete[] tmp;
    return result;
}

Str& Str::operator+=(const Str& s)
{
    char* tmp = new char[strlen(data) + strlen(s.data) + 1];
    strcpy(tmp, data);
    strcat(tmp, s.data);
    clear();
    copy(tmp);
    delete[] tmp;
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
