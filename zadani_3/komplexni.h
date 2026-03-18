// Dias Nurgaliyev 39994

#pragma once

class KomplexniCislo
{
private:
    double real;
    double imag;

public:
    KomplexniCislo(double r = 0.0, double i = 0.0);
    KomplexniCislo(const KomplexniCislo& k);

    void   setReal(double r);
    void   setImag(double i);
    double getReal() const;
    double getImag() const;

    KomplexniCislo soucet(const KomplexniCislo& k) const;
    KomplexniCislo rozdil(const KomplexniCislo& k) const;
    KomplexniCislo soucin(const KomplexniCislo& k) const;

    KomplexniCislo& operator=(const KomplexniCislo& k);
    KomplexniCislo  operator+(const KomplexniCislo& k) const;
    KomplexniCislo  operator-(const KomplexniCislo& k) const;
    KomplexniCislo  operator*(const KomplexniCislo& k) const;
    KomplexniCislo& operator+=(const KomplexniCislo& k);
    KomplexniCislo& operator-=(const KomplexniCislo& k);
    KomplexniCislo& operator*=(const KomplexniCislo& k);

    void vypis() const;
};
