#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras : public Localitate
{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.

public:
    Oras();
    Oras(const char *, const int, const int, const int);
    Oras(const Oras &);
    Oras &operator=(const Oras &);

    friend ostream& operator<<(ostream &, Oras &);

    void afisare(ostream &);
    virtual int getVenit_mediu();
};

#endif