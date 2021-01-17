#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras : public Localitate
{
    int bonus_venit;

public:
    Oras();
    Oras(int, const char*, int, int);

    void afisare();
};

#endif
