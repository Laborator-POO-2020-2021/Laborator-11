#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include "Baza.hpp"

class Localitate:virtual public Baza
{
    char* nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(char*, int, int);
    ~Localitate();

    Localitate& operator=(const Localitate &);
    void afisare();
    int getLocuitori();
    int getVenit();
};

#endif // LOCALITATE_HPP
