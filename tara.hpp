#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara
{
private:
    Localitate **v;

public:
    Tara();
    Tara(Localitate **);
    Tara &operator=(Tara &);
    ~Tara();

    friend ostream &operator<<(ostream &, Tara &);

    int getVenit_mediu();
    int getLocuitori();
};

#endif