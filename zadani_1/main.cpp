// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neeopsal jsem cizi zdrojove kody
// Nikdo me pri vypracovavani neradil
// NENI MOJE TVORBA
// Dias Nurgaliyev 39994

#include <iostream>
#include "zvire.h"
#include "student.h"
using namespace std;

int main()
{
    Zvire pytlik;
    pytlik.jez(5);
    cout << "Vek: "           << pytlik.stari() << endl;
    cout << "Zije: "          << pytlik.zije()  << endl;
    pytlik.vymesuj(100);
    cout << "Po vymesovani: " << pytlik.zije()  << endl;

    Student s;
    s.setJmeno("Dias Nurgaliyev");
    s.zapis(MATEMATIKA);
    s.zapis(FYZIKA);
    s.zapis(PROGRAMOVANI);

    s.hodnoceni(MATEMATIKA,   true);
    s.hodnoceni(MATEMATIKA,   false, ZNAMKA_1);
    s.hodnoceni(FYZIKA,       true);
    s.hodnoceni(FYZIKA,       false, ZNAMKA_2);
    s.hodnoceni(PROGRAMOVANI, true);
    s.hodnoceni(PROGRAMOVANI, false, ZNAMKA_3);

    s.vypis();

    return 0;
}
