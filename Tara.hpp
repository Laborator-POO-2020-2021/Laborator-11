
#ifndef LAB11_TARA_HPP
#define LAB11_TARA_HPP
#include "Localitate.hpp"

class Tara {
    Localitate **v;
public:
    Tara();
    Tara(Localitate**);
    Tara(const Tara&);
    ~Tara();

    int getNrLoc();
    double getVenit();
    void afisare();
};


#endif //LAB11_TARA_HPP
