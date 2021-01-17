
#include "localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char * nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

void Localitate::afisare()
{
    cout << endl << "Nume: " << nume << ". Nr. locuitori: " << nr_locuitori << ". Venit mediu: " << venit_mediu;
}

int Localitate::getNrLoc()
{
    return nr_locuitori;
}

int Localitate::getVenitMediu()
{
    return venit_mediu;
}

Localitate::~Localitate()
{
    delete[] nume;
}
