// Dias Nurgaliyev 39994

#include "sortmin.h"

static void swap(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void SortMin(int& a, int& b, int& c)
{
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}
