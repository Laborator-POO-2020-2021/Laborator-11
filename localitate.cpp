#include "localitate.h"

Localitate :: Localitate() : nume(NULL) { }

Localitate :: Localitate(const char *nume, int nr_locuitori, int venit_mediu)
    : nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

int Localitate :: getLocuitori()
{
    return nr_locuitori;
}

int Localitate :: getVenitMediu()
{
    return venit_mediu;
}

int Localitate :: getWage()
{
    return venit_mediu;
}

void Localitate :: afisare()
{
    cout << nume << endl << nr_locuitori << endl << venit_mediu;
}

Localitate :: ~Localitate()
{
    delete []nume;
}

