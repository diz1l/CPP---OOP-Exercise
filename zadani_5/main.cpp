// Dias Nurgaliyev 39994

#include <iostream>
#include "str.h"
#include "longint.h"
using namespace std;

int main()
{
    Str s1("Ahoj");
    Str s2(" Svete");
    Str s3 = s1 + s2;
    cout << "s1 + s2 = "; s3.vypis();

    s1 += s2;
    cout << "s1 += s2: "; s1.vypis();

    LongInt a(10);
    LongInt b(a);
    LongInt c;
    c = 25;
    cout << "LongInt a: "; a.vypis();
    cout << "LongInt b (copy): "; b.vypis();
    cout << "LongInt c (=25): "; c.vypis();

    return 0;
}
