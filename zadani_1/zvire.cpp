// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neeopsal jsem cizi zdrojove kody
// Nikdo me pri vypracovavani neradil
// NENI MOJE TVORBA
// Dias Nurgaliyev 39994

#include "zvire.h"

Zvire::Zvire()
{
    zaludek = 1;
    vek = 0;
}

int Zvire::zije()
{
    return zaludek > 0;
}

int Zvire::jez(int jidlo)
{
    if (!zije()) return 0;
    vek++;
    return zaludek += jidlo;
}

int Zvire::vymesuj(int objem)
{
    zaludek -= objem;
    if (zaludek <= 0) zaludek = 0;
    return zaludek;
}

int Zvire::stari()
{
    return vek;
}