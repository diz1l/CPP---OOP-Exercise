// Dias Nurgaliyev 39994

#include "ryba.h"
#include <iostream>

Ryba::Ryba(const char* jmeno, SlanostVody sv)
    : Zvire(jmeno), slanostVody(sv) {}

SlanostVody Ryba::getSlanostVody() const
{
    return slanostVody;
}

void Ryba::vypis() const
{
    Zvire::vypis();
    const char* slana[] = { "Sladka", "Mirne slana", "Slana" };
    std::cout << "  Ryba, slanost vody: " << slana[slanostVody] << std::endl;
}
