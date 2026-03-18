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
    // Test Zvire
    Zvire pytlik;
    pytlik.jez(5);
    pytlik.jez(3);
    pytlik.jez(2);
    cout << "Vek: " << pytlik.stari() << endl;
    cout << "Zije: " << pytlik.zije() << endl;
    pytlik.vymesuj(100);
    cout << "Po vymesovani: " << pytlik.zije() << endl;

    // Test Student
    Student s;
    s.setJmeno("Dias Nurgaliyev");

    s.pridejZnamku(1);
    s.pridejZnamku(2);
    s.pridejZnamku(3);

    s.vypis();

    return 0;
}