// Dias Nurgaliyev 39994

#include <iostream>
#include "komplexni.h"
#include "zvire.h"
#include "student.h"
using namespace std;

int main()
{
    KomplexniCislo a(3.0, 4.0);
    KomplexniCislo b(1.0, -2.0);

    cout << "a = "; a.vypis();
    cout << "b = "; b.vypis();

    KomplexniCislo c = a + b;
    cout << "a + b = "; c.vypis();

    c = a - b;
    cout << "a - b = "; c.vypis();

    c = a * b;
    cout << "a * b = "; c.vypis();

    a += b;
    cout << "a += b: "; a.vypis();

    KomplexniCislo d(a);
    cout << "copy a: "; d.vypis();

    d.setReal(10.0);
    d.setImag(5.0);
    cout << "Po setu: "; d.vypis();
    cout << "Real: " << d.getReal() << ", Imag: " << d.getImag() << endl;

    Zvire z1("Pytlik");
    z1.jez(5);
    z1.jez(3);
    z1.vypis();

    Zvire z2 = z1;
    cout << "Kopie: "; z2.vypis();

    Zvire z3;
    z3 = z1;
    cout << "Prirazeni: "; z3.vypis();

    Student s1("Dias Nurgaliyev");
    s1.pridejZnamku(1);
    s1.pridejZnamku(2);
    s1.vypis();

    Student s2 = s1;
    cout << "Kopie: "; s2.vypis();

    Student s3;
    s3 = s1;
    cout << "Prirazeni: "; s3.vypis();

    return 0;
}
