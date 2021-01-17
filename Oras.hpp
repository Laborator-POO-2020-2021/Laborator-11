#ifndef ORAS
#define ORAS

#include <iostream>
#include "Localitate.hpp"
using namespace std;

class Oras:public Localitate{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
    Oras();
    Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit);
    ~Oras();
    int get_bonus();
    void afisare();
    int get_venit();
};

#endif
