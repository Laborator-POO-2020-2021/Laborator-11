#include "Localitate.hpp"

Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0){};

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    this->nume=new char(strlen(nume)+1);
    strcpy(this->nume, nume);
}

void Localitate::afisare()
{
    cout<<"Nume:"<<nume<<endl;
    cout<<"Nr_locuitori:"<<nr_locuitori<<endl;
    cout<<"Venit mediu:"<<venit_mediu<<endl;
}

int Localitate::get_venit()
{
    return (this->venit_mediu)*(this->nr_locuitori);
}

Localitate::~Localitate()
{
    delete []nume;
}

int Localitate::get_venit_mediu()
{
    return this->venit_mediu;
}

int Localitate::get_nr_locuitori()
{
    return this->nr_locuitori;
}

const char* Localitate::get_nume() const
{
    return this->nume;
}

