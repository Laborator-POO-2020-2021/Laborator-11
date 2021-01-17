#ifndef LAB11_LOCALITATE_HPP
#define LAB11_LOCALITATE_HPP

#include "Tara.hpp"

class Localitate: public Tara {
protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(char *nume, int nrLocuitori, int venitMediu);

    Localitate& operator=(Localitate &obj);

    virtual void afisare();

    virtual int getNrLocuitori() const;

    virtual int getVenitMediu() const;


};


#endif
