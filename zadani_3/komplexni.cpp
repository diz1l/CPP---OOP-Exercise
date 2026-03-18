// Dias Nurgaliyev 39994

#include "komplexni.h"
#include <iostream>

KomplexniCislo::KomplexniCislo(double r, double i)
{
    real = r;
    imag = i;
}

KomplexniCislo::KomplexniCislo(const KomplexniCislo& k)
{
    real = k.real;
    imag = k.imag;
}

void KomplexniCislo::setReal(double r) { real = r; }
void KomplexniCislo::setImag(double i) { imag = i; }
double KomplexniCislo::getReal() const { return real; }
double KomplexniCislo::getImag() const { return imag; }

KomplexniCislo KomplexniCislo::soucet(const KomplexniCislo& k) const
{
    return KomplexniCislo(real + k.real, imag + k.imag);
}

KomplexniCislo KomplexniCislo::rozdil(const KomplexniCislo& k) const
{
    return KomplexniCislo(real - k.real, imag - k.imag);
}

KomplexniCislo KomplexniCislo::soucin(const KomplexniCislo& k) const
{
    return KomplexniCislo(real * k.real - imag * k.imag,
                          real * k.imag + imag * k.real);
}

KomplexniCislo& KomplexniCislo::operator=(const KomplexniCislo& k)
{
    real = k.real;
    imag = k.imag;
    return *this;
}

KomplexniCislo KomplexniCislo::operator+(const KomplexniCislo& k) const
{
    return soucet(k);
}

KomplexniCislo KomplexniCislo::operator-(const KomplexniCislo& k) const
{
    return rozdil(k);
}

KomplexniCislo KomplexniCislo::operator*(const KomplexniCislo& k) const
{
    return soucin(k);
}

KomplexniCislo& KomplexniCislo::operator+=(const KomplexniCislo& k)
{
    real += k.real;
    imag += k.imag;
    return *this;
}

KomplexniCislo& KomplexniCislo::operator-=(const KomplexniCislo& k)
{
    real -= k.real;
    imag -= k.imag;
    return *this;
}

KomplexniCislo& KomplexniCislo::operator*=(const KomplexniCislo& k)
{
    double r = real * k.real - imag * k.imag;
    double i = real * k.imag + imag * k.real;
    real = r;
    imag = i;
    return *this;
}

void KomplexniCislo::vypis() const
{
    std::cout << real;
    if (imag >= 0) std::cout << " + " << imag << "i" << std::endl;
    else           std::cout << " - " << -imag << "i" << std::endl;
}
