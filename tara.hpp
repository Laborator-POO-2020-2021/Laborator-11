
#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara : public Localitate
{
    Localitate **v;

public:
    Tara();
    Tara(Localitate**);
    Tara(const Tara&);
    Tara& operator =(const Tara&);
    ~Tara();

    int getNr_locuitori() const;
    int getVenit_mediu() const;
    void afisare();
};

#endif



