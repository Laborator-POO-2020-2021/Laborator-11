#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara{
    Localitate **v;
public:
    Tara();
    Tara(Localitate**);
    ~Tara();
    int getNrLocuitori();
    int getVenit();
    void Write();
};

#endif