#ifndef LAB11_CAPITALA_HPP
#define LAB11_CAPITALA_HPP

#include "Oras.hpp"

class Capitala: virtual public Oras{
protected:
    char *tara;
public:
    Capitala();

    Capitala(char *nume, int nrLocuitori, int venitMediu, int bonusVenit, char *tara);

    Capitala& operator=(Capitala &obj);

    virtual void afisare();
};


#endif
