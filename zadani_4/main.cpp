// Dias Nurgaliyev 39994

#include <iostream>
#include "str.h"
#include "longint.h"
using namespace std;

int main()
{
    Str s1("Ahoj");
    Str s2(s1);
    Str s3;
    s3 = "Svete";
    Str s4;
    s4 = s1;

    cout << "s1: "; s1.vypis();
    cout << "s2 (copy s1): "; s2.vypis();
    cout << "s3: "; s3.vypis();
    cout << "s4 (= s1): "; s4.vypis();
    cout << "Delka s1: " << s1.delka() << endl;

    LongInt l1(42);
    LongInt l2(l1);
    LongInt l3;
    l3 = 100;
    LongInt l4;
    l4 = l1;

    cout << "l1: "; l1.vypis();
    cout << "l2 (copy l1): "; l2.vypis();
    cout << "l3 (= 100): "; l3.vypis();
    cout << "l4 (= l1): "; l4.vypis();

    return 0;
}
