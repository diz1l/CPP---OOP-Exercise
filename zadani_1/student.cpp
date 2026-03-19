// Dias Nurgaliyev 39994

#include "student.h"
#include <iostream>

Student::Student() : pocet(0) {}

void Student::setJmeno(std::string j) { jmeno = j; }

int Student::zapis(Predmet p)
{
    if (pocet >= 20) return 0;
    for (int i = 0; i < pocet; i++)
        if (predmety[i].predmet == p) return 0;
    predmety[pocet] = { p, false, 0, 0 };
    pocet++;
    return 1;
}

int Student::hodnoceni(Predmet p, bool jeZacet, Znamka znamka)
{
    for (int i = 0; i < pocet; i++) {
        if (predmety[i].predmet != p) continue;
        if (jeZacet) {
            predmety[i].zacet = true;
            return 1;
        }
        if (!predmety[i].zacet)      return 0;
        if (predmety[i].pokusy >= 3) return 0;
        predmety[i].pokusy++;
        predmety[i].zkouska = (int)znamka;
        return 1;
    }
    return 0;
}

int Student::pocetSlozenych()
{
    int n = 0;
    for (int i = 0; i < pocet; i++)
        if (predmety[i].zacet && predmety[i].zkouska >= 1)
            n++;
    return n;
}

double Student::prumer()
{
    int n = 0, suma = 0;
    for (int i = 0; i < pocet; i++) {
        if (predmety[i].zacet && predmety[i].zkouska >= 1) {
            suma += predmety[i].zkouska;
            n++;
        }
    }
    if (n == 0) return 0.0;
    return (double)suma / n;
}

static const char* predmetNazev(Predmet p)
{
    switch (p) {
        case MATEMATIKA:   return "Matematika";
        case FYZIKA:       return "Fyzika";
        case PROGRAMOVANI: return "Programovani";
        case CHEMIE:       return "Chemie";
        case BIOLOGIE:     return "Biologie";
        default:           return "?";
    }
}

void Student::vypis()
{
    std::cout << "Student: " << jmeno << std::endl;
    for (int i = 0; i < pocet; i++) {
        std::cout << "  " << predmetNazev(predmety[i].predmet);
        std::cout << " zacet: " << (predmety[i].zacet ? "ano" : "ne");
        if (predmety[i].zkouska > 0)
            std::cout << " zkouska: " << predmety[i].zkouska;
        std::cout << std::endl;
    }
    std::cout << "Slozeno: " << pocetSlozenych() << std::endl;
    std::cout << "Prumer: "  << prumer()         << std::endl;
}
