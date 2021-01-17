#ifndef LAB11_MUNICIPIU_HPP
#define LAB11_MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu:virtual public Oras{
protected:
    char * regiune;
public:
    Municipiu();

    Municipiu(char *nume, int nrLocuitori, int venitMediu, int bonusVenit, char *regiune);

    Municipiu& operator=(Municipiu &obj);

    virtual void afisare();
};


#endif
