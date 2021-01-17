#ifndef MUNICIPIU_HPP
#define MUNICIPIU HPP

#include "oras.hpp"

class Municipiu : public Oras
{
    char *regiune;

public:
    Municipiu();
    Municipiu(const char *, const int, const int, const int, const char *);
    Municipiu(const Municipiu &);
    ~Municipiu();
    Municipiu &operator=(const Municipiu &);

    friend ostream& operator<<(ostream &, Municipiu &);

    void afisare(ostream &);
    int getVenit_mediu();
};

#endif