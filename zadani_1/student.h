// Dias Nurgaliyev 39994

#pragma once
#include <string>

enum Predmet { MATEMATIKA, FYZIKA, PROGRAMOVANI, CHEMIE, BIOLOGIE };
enum Znamka  { ZNAMKA_1 = 1, ZNAMKA_2, ZNAMKA_3, ZNAMKA_4 };

struct PredmetZaznam {
    Predmet predmet;
    bool    zacet;
    int     zkouska;
    int     pokusy;
};

class Student
{
private:
    std::string   jmeno;
    PredmetZaznam predmety[20];
    int           pocet;

public:
    Student();
    void   setJmeno(std::string j);
    int    zapis(Predmet p);
    int    hodnoceni(Predmet p, bool jeZacet, Znamka znamka = ZNAMKA_1);
    int    pocetSlozenych();
    double prumer();
    void   vypis();
};
