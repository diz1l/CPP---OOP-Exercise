// Dias Nurgaliyev 39994

#include <string>

class Student
{
private:
    std::string jmeno;
    int znamky[10];
    int pocet;

public:
    Student();
    void setJmeno(std::string jmeno);
    int pridejZnamku(int znamka);
    double prumer();
    void vypis();
};