#include "Localitate.hpp"

Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0)
{

}

Localitate::Localitate(char* nume, int nr_locuitori, int venit_mediu)
{
    if (this->nume != NULL)
        delete []this->nume;

    this->nume = new char[strlen(nume) + 1];
    strcpy (this->nume, nume);

    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::~Localitate()
{
    delete []nume;
}

void Localitate::afisare()
{
    cout << "NUME: " << nume << endl;
    cout << "NR DE LOCUITORI: " << nr_locuitori << endl;
    cout << "VENIT MEDIU: " << venit_mediu << endl;
}

Localitate& Localitate:: operator=(const Localitate &x)
{
    if (this->nume != NULL)
        delete []this->nume;

    this->nume = new char[strlen(x.nume)+1];
    strcpy(this->nume, x.nume);

    this->nr_locuitori = x.nr_locuitori;
    this->venit_mediu = x.venit_mediu;

    return *this;
}

int Localitate::getLocuitori()
{
    return nr_locuitori;
}

int Localitate::getVenit()
{
    return venit_mediu;
}
