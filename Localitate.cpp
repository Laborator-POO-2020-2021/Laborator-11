#include "Localitate.hpp"

Localitate::Localitate()
{
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}

Localitate::Localitate(const char* nume, const int nr_locuitori, const int venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::~Localitate()
{
    delete []nume;
}

Localitate& Localitate::operator=(Localitate &x)
{
    if(nume != NULL)
        delete []nume;

    nume = new char[strlen(x.nume) + 1];
    strcpy(nume, x.nume);

    venit_mediu = x.venit_mediu;
    nr_locuitori = x.nr_locuitori;

    return *this;
}

double Localitate::Populatie()
{
    return nr_locuitori;
}

double Localitate::Venit()
{
    return venit_mediu;
}

void Localitate::afisare()
{
    cout<<"Numele localitatii: "<<nume<<'\n';
    cout<<"Numarul de locuitori: "<<nr_locuitori<<" care au salariul mediu de: "<<venit_mediu<<" RON"<<'\n';
}
