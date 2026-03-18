// Dias Nurgaliyev 39994

#include "savec.h"
#include <iostream>

Savec::Savec(const char* jmeno, PocetPrstu pp)
    : Zvire(jmeno), pocetPrstu(pp) {}

PocetPrstu Savec::getPocetPrstu() const
{
    return pocetPrstu;
}

void Savec::vypis() const
{
    Zvire::vypis();
    std::cout << "  Savec, pocet prstu: " << (int)pocetPrstu << std::endl;
}
