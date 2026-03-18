// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

class Zvire
{
private:
    char* jmeno;
    int   zaludek;
    int   vek;

public:
    Zvire(const char* jmeno = "");
    Zvire(const Zvire& z);
    virtual ~Zvire();

    Zvire& operator=(const Zvire& z);

    void        setJmeno(const char* jmeno);
    const char* getJmeno() const;

    int  zije() const;
    int  jez(int jidlo);
    int  vymesuj(int objem);
    int  stari() const;

    virtual void vypis() const;
};
