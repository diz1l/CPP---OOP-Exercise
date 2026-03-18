// Dias Nurgaliyev 39994

#include <iostream>
#include "zvire.h"
#include "savec.h"
#include "ptak.h"
#include "ryba.h"
using namespace std;

int main()
{
    Zvire  z("Zvire1");
    Savec  s("Pes",     PETI_PRSTY);
    Ptak   p("Papousek", ZELENA);
    Ryba   r("Kapr",    SLADKA);

    z.jez(3);
    s.jez(5);
    p.jez(2);
    r.jez(4);

    cout << "--- Staticka alokace ---" << endl;
    z.vypis();
    s.vypis();
    p.vypis();
    r.vypis();

    return 0;
}
