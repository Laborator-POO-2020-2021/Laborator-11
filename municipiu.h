#ifndef MUNICIPIU_H
#define MUNICIPIU_H

#include "oras.h"

class Municipiu : public Oras   //exista un typo in README ("Minicipiu")
{
    char * regiune;
public:
    Municipiu();
    Municipiu(const char*, int, int, int, const char*);
    void afisare();
    ~Municipiu();
};

#endif // MUNICIPIU_H
