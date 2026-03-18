// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

class Str
{
private:
    char* data;

    void copy(const char* s);
    void clear();

public:
    Str();
    Str(const char* s);
    Str(const Str& s);
    ~Str();

    Str& operator=(const Str& s);
    Str& operator=(const char* s);

    Str  operator+(const Str& s) const;
    Str& operator+=(const Str& s);

    const char* get() const;
    int         delka() const;
    void        vypis() const;
};
