// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

struct Zvire
{
    char* jmeno;
    int   zaludek;
    int   vek;

    Zvire();
    Zvire(const Zvire& z);
};

void   init(Zvire& z, const char* jmeno = "");
void   destroy(Zvire& z);
void   setJmeno(Zvire& z, const char* jmeno);
const char* getJmeno(Zvire& z);
int    zije(Zvire& z);
int    jez(Zvire& z, int jidlo);
int    vymesuj(Zvire& z, int objem);
int    stari(Zvire& z);
void   vypis(Zvire& z);
