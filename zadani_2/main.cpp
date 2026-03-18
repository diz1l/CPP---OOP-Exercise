// Dias Nurgaliyev 39994

#include <iostream>
#include "zvire.h"
#include "student.h"
#include "sortmin.h"
using namespace std;

int main()
{
    Zvire a;
    init(a, "Pytlik");
    jez(a, 5);
    jez(a, 3);
    cout << "Jmeno: " << getJmeno(a) << endl;
    cout << "Vek: " << stari(a) << endl;
    cout << "Zije: " << zije(a) << endl;
    vymesuj(a, 100);
    cout << "Po vymesovani: " << zije(a) << endl;
    setJmeno(a, "Pytlik2");
    vypis(a);

    Zvire b = a;
    cout << "Kopie zvire: ";
    vypis(b);

    destroy(a);
    destroy(b);

    Student s;
    init(s, "Dias Nurgaliyev");
    pridejZnamku(s, 1);
    pridejZnamku(s, 2);
    pridejZnamku(s, 3);
    vypis(s);

    Student s2 = s;
    cout << "Kopie studenta: ";
    vypis(s2);

    destroy(s);
    destroy(s2);

    int x = 9, y = 3, z = 6;
    cout << "Pred sortem: " << x << " " << y << " " << z << endl;
    SortMin(x, y, z);
    cout << "Po sortu:    " << x << " " << y << " " << z << endl;

    return 0;
}
