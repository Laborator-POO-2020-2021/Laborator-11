
#ifndef ORAS_HPP
#define ORAS_HPP
#include "Localitate.hpp"
#include <iostream>
#include <string.h>

using namespace std;

class Oras: public Localitate
{
    int bonus_venit;
public:
    Oras();
    Oras(const char*, int, int, int);
    virtual void afisare();
    ~Oras();

};
#endif // ORAS_HPP
