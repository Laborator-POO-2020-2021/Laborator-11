
#include "Localitate.hpp"


Localitate:: Localitate()
{
    this->nume=NULL;
    this->nr_locuitori=0;
    this->venit_mediu=0;
}

Localitate:: Localitate(const char* nume, int nr, int venit)
{
    this->nume=new char[strlen(nume)+1];
    strcpy(this->nume, nume);
    this->nr_locuitori=nr;
    this->venit_mediu=venit;
}

int Localitate:: getVenit()
{
    return this->venit_mediu;
}

int Localitate:: getNr_locuitori()
{
    return this->nr_locuitori;
}
void Localitate:: afisare()
{
    cout<<"Nume localitate: "<<this->nume<<endl;
    cout<<"Numar locuitori: "<<this->nr_locuitori<<endl;
    cout<<"Venit mediu: "<<this->venit_mediu<<endl;
}

Localitate:: ~Localitate()
{
    delete[] this->nume;
}
