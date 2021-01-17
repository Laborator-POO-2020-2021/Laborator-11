#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras:public Localitate
{
    int bonus_venit;

public:
    Oras();
    Oras(int, char*, int, int);
    ~Oras();

    Oras& operator=(const Oras &);
    void afisare();
    int getVenit();
};

#endif // ORAS_HPP
