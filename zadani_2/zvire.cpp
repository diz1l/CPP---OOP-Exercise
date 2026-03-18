// Dias Nurgaliyev 39994

#include "zvire.h"
#include <iostream>
#include <cstring>

Zvire::Zvire()
{
    jmeno   = 0;
    zaludek = 0;
    vek     = 0;
}

Zvire::Zvire(const Zvire& z)
{
    zaludek = z.zaludek;
    vek     = z.vek;
    jmeno   = new char[strlen(z.jmeno) + 1];
    strcpy(jmeno, z.jmeno);
}

void init(Zvire& z, const char* jm)
{
    if (jm == 0) jm = "";
    z.zaludek = 1;
    z.vek     = 0;
    z.jmeno   = new char[strlen(jm) + 1];
    strcpy(z.jmeno, jm);
}

void destroy(Zvire& z)
{
    delete[] z.jmeno;
    z.jmeno = 0;
}

void setJmeno(Zvire& z, const char* jm)
{
    if (jm == 0) jm = "";
    delete[] z.jmeno;
    z.jmeno = new char[strlen(jm) + 1];
    strcpy(z.jmeno, jm);
}

const char* getJmeno(Zvire& z)
{
    return z.jmeno;
}

int zije(Zvire& z)
{
    return z.zaludek > 0;
}

int jez(Zvire& z, int jidlo)
{
    if (!zije(z)) return 0;
    if (jidlo < 0) return z.zaludek;
    z.vek++;
    z.zaludek += jidlo;
    return z.zaludek;
}

int vymesuj(Zvire& z, int objem)
{
    if (objem < 0) return z.zaludek;
    z.zaludek -= objem;
    if (z.zaludek <= 0) z.zaludek = 0;
    return z.zaludek;
}

int stari(Zvire& z)
{
    return z.vek;
}

void vypis(Zvire& z)
{
    std::cout << "Zvire: " << z.jmeno
              << ", zaludek: " << z.zaludek
              << ", vek: " << z.vek << std::endl;
}
