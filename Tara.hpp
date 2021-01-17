#ifndef TARA_HPP
#define TARA_HPP

#include "Municipiu.hpp"
#include "Capitala.hpp"

class Tara
{
    Localitate **v;

public:

    Tara();
    Tara(Localitate**);
    ~Tara();

    void afisare();
    int getPopulatie();
    int getVenit();
};

#endif // TARA_HPP
