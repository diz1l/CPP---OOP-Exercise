// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

struct Student
{
    char* jmeno;
    int   znamky[10];
    int   pocet;

    Student();
    Student(const Student& s);
};

void        init(Student& s, const char* jmeno = "");
void        destroy(Student& s);
void        setJmeno(Student& s, const char* jmeno);
const char* getJmeno(Student& s);
int         pridejZnamku(Student& s, int znamka);
double      prumer(Student& s);
void        vypis(Student& s);
