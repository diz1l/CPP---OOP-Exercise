// Dias Nurgaliyev 39994

#include "ptak.h"
#include <iostream>

Ptak::Ptak(const char* jmeno, BarvaPeri bp)
    : Zvire(jmeno, 15), barvaPeri(bp) {}

int Ptak::jez(int jidlo)
{
    if (!zije()) return 0;
    if (jidlo < 0) return zaludek;
    vek += 2;
    zaludek += jidlo;
    return zaludek;
}

BarvaPeri Ptak::getBarvaPeri() const
{
    return barvaPeri;
}

void Ptak::vypis() const
{
    Zvire::vypis();
    const char* barvy[] = { "Cervena", "Modra", "Zelena", "Zluta", "Bila", "Cerna" };
    std::cout << "  Ptak, barva peri: " << barvy[barvaPeri] << std::endl;
}
