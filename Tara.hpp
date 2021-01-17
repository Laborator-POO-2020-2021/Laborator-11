#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara {
    Localitate **v;
public:
    Tara();
    Tara(Localitate**);
    Tara& operator=(const Tara&);
    int getLocuitori();
    double getVenit();
    void afisare();
    ~Tara();
};

#endif