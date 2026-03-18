// Dias Nurgaliyev 39994

#pragma once

class LongInt
{
private:
    long long hodnota;

    void copy(long long h);
    void clear();

public:
    LongInt();
    LongInt(int i);
    LongInt(const LongInt& l);
    ~LongInt();

    LongInt& operator=(const LongInt& l);
    LongInt& operator=(int i);

    long long get() const;
    void      vypis() const;
};
