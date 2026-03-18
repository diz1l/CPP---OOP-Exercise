// Dias Nurgaliyev 39994

#include "student.h"
#include <iostream>

Student::Student()
{
    pocet = 0;
    jmeno = "";
}

void Student::setJmeno(std::string j)
{
    jmeno = j;
}

int Student::pridejZnamku(int znamka)
{
    if (pocet >= 10) return 0;
    znamky[pocet] = znamka;
    pocet++;
    return 1;
}

double Student::prumer()
{
    if (pocet == 0) return 0.0;
    int suma = 0;
    for (int i = 0; i < pocet; i++)
        suma += znamky[i];
    return (double)suma / pocet;
}

void Student::vypis()
{
    std::cout << "Student: " << jmeno << std::endl;
    std::cout << "Znamky: ";
    for (int i = 0; i < pocet; i++)
        std::cout << znamky[i] << " ";
    std::cout << std::endl;
    std::cout << "Prumer: " << prumer() << std::endl;
}