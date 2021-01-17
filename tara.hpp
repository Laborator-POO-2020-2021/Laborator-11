#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara
{
protected:
    Localitate **v;

public:
    Tara();
    Tara(Localitate **);
    ~Tara();
    Tara &operator=(Tara &);
    int get_venit();
    int get_populatie();
    friend ostream &operator<<(ostream &, Tara &);
};

#endif