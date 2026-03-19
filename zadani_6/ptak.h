// Dias Nurgaliyev 39994

#pragma once
#include "zvire.h"

enum BarvaPeri
{
    CERVENA,
    MODRA,
    ZELENA,
    ZLUTA,
    BILA,
    CERNA
};

class Ptak : public Zvire
{
private:
    BarvaPeri barvaPeri;

public:
    Ptak(const char* jmeno = "", BarvaPeri bp = BILA);

    int       jez(int jidlo);
    BarvaPeri getBarvaPeri() const;
    void      vypis() const;
};
