#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras: public Localitate {
protected:
    int bonus_venit;
public:
    Oras();
    Oras(char*, int, int, int);

    int getVenitMediu();
    void afisare();

    ~Oras();
};

#endif