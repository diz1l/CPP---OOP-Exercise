// Dias Nurgaliyev 39994

#include "ryba.h"
#include <iostream>

Ryba::Ryba(const char* jmeno, SlanostVody sv)
    : Zvire(jmeno, 5), slanostVody(sv) {}

int Ryba::jez(int jidlo)
{
    if (!zije()) return 0;
    if (jidlo < 0) return zaludek;
    zaludek += jidlo;
    return zaludek;
}

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
