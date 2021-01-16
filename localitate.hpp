#ifndef LOC_HPP
#define LOC_HPP
#include "util.hpp"

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char *, int, int);
    ~Localitate();
    char *getNume();
    int getNumarLocuitori();
    int getVenit();
    void afisare();
};
#endif