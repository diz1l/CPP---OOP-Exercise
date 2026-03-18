// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

class Student
{
private:
    char* jmeno;
    int   znamky[10];
    int   pocet;

public:
    Student(const char* jmeno = "");
    Student(const Student& s);
    ~Student();

    Student& operator=(const Student& s);

    void        setJmeno(const char* jmeno);
    const char* getJmeno() const;

    int    pridejZnamku(int znamka);
    double prumer() const;
    void   vypis() const;
};
