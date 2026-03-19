// Dias Nurgaliyev 39994

#pragma once
#include "zvire.h"

enum PocetPrstu
{
    TRI_PRSTY   = 3,
    CTYRI_PRSTY = 4,
    PETI_PRSTY  = 5
};

class Savec : public Zvire
{
private:
    PocetPrstu pocetPrstu;

public:
    Savec(const char* jmeno = "", PocetPrstu pp = PETI_PRSTY);

    int        jez(int jidlo);
    PocetPrstu getPocetPrstu() const;
    void       vypis() const;
};
