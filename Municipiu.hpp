#include <iostream>
#include "Oras.hpp"
using namespace std;

class Municipiu:public Oras{
    char *regiune;
public:
    Municipiu();
    Municipiu(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *regiune);
    ~Municipiu();
    void afisare();
};

