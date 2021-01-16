#ifndef TARA_HPP_
#define TARA_HPP_

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
    int getLocuitori() const;
};

#endif