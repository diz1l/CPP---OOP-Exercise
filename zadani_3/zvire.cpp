// Dias Nurgaliyev 39994

#include "zvire.h"
#include <iostream>
#include <cstring>

Zvire::Zvire(const char* jm)
{
    if (jm == 0) jm = "";
    zaludek = 1;
    vek     = 0;
    jmeno   = new char[strlen(jm) + 1];
    strcpy(jmeno, jm);
}

Zvire::Zvire(const Zvire& z)
{
    zaludek = z.zaludek;
    vek     = z.vek;
    jmeno   = new char[strlen(z.jmeno) + 1];
    strcpy(jmeno, z.jmeno);
}

Zvire::~Zvire()
{
    delete[] jmeno;
}

Zvire& Zvire::operator=(const Zvire& z)
{
    if (this == &z) return *this;
    delete[] jmeno;
    jmeno   = new char[strlen(z.jmeno) + 1];
    strcpy(jmeno, z.jmeno);
    zaludek = z.zaludek;
    vek     = z.vek;
    return *this;
}

void Zvire::setJmeno(const char* jm)
{
    if (jm == 0) jm = "";
    delete[] jmeno;
    jmeno = new char[strlen(jm) + 1];
    strcpy(jmeno, jm);
}

const char* Zvire::getJmeno() const
{
    return jmeno;
}

int Zvire::zije() const
{
    return zaludek > 0;
}

int Zvire::jez(int jidlo)
{
    if (!zije()) return 0;
    if (jidlo < 0) return zaludek;
    vek++;
    zaludek += jidlo;
    return zaludek;
}

int Zvire::vymesuj(int objem)
{
    if (objem < 0) return zaludek;
    zaludek -= objem;
    if (zaludek <= 0) zaludek = 0;
    return zaludek;
}

int Zvire::stari() const
{
    return vek;
}

void Zvire::vypis() const
{
    std::cout << "Zvire: " << jmeno
              << ", zaludek: " << zaludek
              << ", vek: " << vek << std::endl;
}
