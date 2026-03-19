// Dias Nurgaliyev 39994

#pragma once
#include <cstring>

class Zvire
{
protected:
    char* jmeno;
    int   zaludek;
    int   vek;
    int   ocekavanyVek;

public:
    Zvire(const char* jmeno = "", int ocekavanyVek = 15);
    Zvire(const Zvire& z);
    virtual ~Zvire();

    Zvire& operator=(const Zvire& z);

    void        setJmeno(const char* jmeno);
    const char* getJmeno() const;
    int         getOcekavanyVek() const;

    int          zije() const;
    virtual int  jez(int jidlo);
    int          vymesuj(int objem);
    int          stari() const;

    virtual void vypis() const;
};
