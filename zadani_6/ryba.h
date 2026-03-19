// Dias Nurgaliyev 39994

#pragma once
#include "zvire.h"

enum SlanostVody
{
    SLADKA,
    MIRNE_SLANA,
    SLANA
};

class Ryba : public Zvire
{
private:
    SlanostVody slanostVody;

public:
    Ryba(const char* jmeno = "", SlanostVody sv = SLADKA);

    int         jez(int jidlo);
    SlanostVody getSlanostVody() const;
    void        vypis() const;
};
