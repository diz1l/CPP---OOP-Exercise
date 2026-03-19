// Dias Nurgaliyev 39994

#include "savec.h"
#include <iostream>

Savec::Savec(const char* jmeno, PocetPrstu pp)
    : Zvire(jmeno, 25), pocetPrstu(pp) {}

int Savec::jez(int jidlo)
{
    if (!zije()) return 0;
    if (jidlo < 0) return zaludek;
    vek++;
    zaludek += jidlo;
    return zaludek;
}

PocetPrstu Savec::getPocetPrstu() const
{
    return pocetPrstu;
}

void Savec::vypis() const
{
    Zvire::vypis();
    std::cout << "  Savec, pocet prstu: " << (int)pocetPrstu << std::endl;
}
