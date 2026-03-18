// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

class Str
{
private:
    char* data;

public:
    Str();
    Str(const char* s);
    Str(const Str& s);
    ~Str();

    Str& operator=(const Str& s);
    Str& operator=(const char* s);

    const char* get() const;
    int         delka() const;
    void        vypis() const;
};
