// Dias Nurgaliyev 39994

#include "ptak.h"
#include <iostream>

Ptak::Ptak(const char* jmeno, BarvaPeri bp)
    : Zvire(jmeno), barvaPeri(bp) {}

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
