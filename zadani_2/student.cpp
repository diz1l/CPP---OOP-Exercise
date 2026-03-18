// Dias Nurgaliyev 39994

#include "student.h"
#include <iostream>
#include <cstring>

Student::Student()
{
    jmeno = 0;
    pocet = 0;
}

Student::Student(const Student& s)
{
    pocet  = s.pocet;
    jmeno  = new char[strlen(s.jmeno) + 1];
    strcpy(jmeno, s.jmeno);
    for (int i = 0; i < pocet; i++)
        znamky[i] = s.znamky[i];
}

void init(Student& s, const char* jm)
{
    if (jm == 0) jm = "";
    s.pocet = 0;
    s.jmeno = new char[strlen(jm) + 1];
    strcpy(s.jmeno, jm);
}

void destroy(Student& s)
{
    delete[] s.jmeno;
    s.jmeno = 0;
}

void setJmeno(Student& s, const char* jm)
{
    if (jm == 0) jm = "";
    delete[] s.jmeno;
    s.jmeno = new char[strlen(jm) + 1];
    strcpy(s.jmeno, jm);
}

const char* getJmeno(Student& s)
{
    return s.jmeno;
}

int pridejZnamku(Student& s, int znamka)
{
    if (s.pocet >= 10) return 0;
    if (znamka < 1 || znamka > 5) return 0;
    s.znamky[s.pocet] = znamka;
    s.pocet++;
    return 1;
}

double prumer(Student& s)
{
    if (s.pocet == 0) return 0.0;
    int suma = 0;
    for (int i = 0; i < s.pocet; i++)
        suma += s.znamky[i];
    return (double)suma / s.pocet;
}

void vypis(Student& s)
{
    std::cout << "Student: " << s.jmeno << std::endl;
    std::cout << "Znamky: ";
    for (int i = 0; i < s.pocet; i++)
        std::cout << s.znamky[i] << " ";
    std::cout << std::endl;
    std::cout << "Prumer: " << prumer(s) << std::endl;
}
