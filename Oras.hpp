
#ifndef LAB11_ORAS_HPP
#define LAB11_ORAS_HPP

#include "Localitate.hpp"

class Oras: public Localitate {
protected:
    int bonus_venit;

public:
    Oras();

    Oras(char *nume, int nrLocuitori, int venitMediu, int bonusVenit);

    Oras& operator=(Oras &obj);

    virtual void afisare();

};


#endif
