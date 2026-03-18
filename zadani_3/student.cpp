// Dias Nurgaliyev 39994

#include "student.h"
#include <iostream>
#include <cstring>

Student::Student(const char* jm)
{
    if (jm == 0) jm = "";
    pocet = 0;
    jmeno = new char[strlen(jm) + 1];
    strcpy(jmeno, jm);
}

Student::Student(const Student& s)
{
    pocet = s.pocet;
    jmeno = new char[strlen(s.jmeno) + 1];
    strcpy(jmeno, s.jmeno);
    for (int i = 0; i < pocet; i++)
        znamky[i] = s.znamky[i];
}

Student::~Student()
{
    delete[] jmeno;
}

Student& Student::operator=(const Student& s)
{
    if (this == &s) return *this;
    delete[] jmeno;
    jmeno = new char[strlen(s.jmeno) + 1];
    strcpy(jmeno, s.jmeno);
    pocet = s.pocet;
    for (int i = 0; i < pocet; i++)
        znamky[i] = s.znamky[i];
    return *this;
}

void Student::setJmeno(const char* jm)
{
    if (jm == 0) jm = "";
    delete[] jmeno;
    jmeno = new char[strlen(jm) + 1];
    strcpy(jmeno, jm);
}

const char* Student::getJmeno() const
{
    return jmeno;
}

int Student::pridejZnamku(int znamka)
{
    if (pocet >= 10) return 0;
    if (znamka < 1 || znamka > 5) return 0;
    znamky[pocet] = znamka;
    pocet++;
    return 1;
}

double Student::prumer() const
{
    if (pocet == 0) return 0.0;
    int suma = 0;
    for (int i = 0; i < pocet; i++)
        suma += znamky[i];
    return (double)suma / pocet;
}

void Student::vypis() const
{
    std::cout << "Student: " << jmeno << std::endl;
    std::cout << "Znamky: ";
    for (int i = 0; i < pocet; i++)
        std::cout << znamky[i] << " ";
    std::cout << std::endl;
    std::cout << "Prumer: " << prumer() << std::endl;
}
