#include "Localitate.hpp"

Localitate::Localitate()
{
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}

Localitate::Localitate(const char *n, int nr, int vm)
{
    nume = new char[strlen(n) + 1];
    strcpy(nume, n);

    nr_locuitori = nr;
    venit_mediu = vm;
}

Localitate::~Localitate()
{
    delete []nume;
}


int Localitate::getPopulatie()
{
    return nr_locuitori;
}

int Localitate::getVenit()
{
    return venit_mediu;
}

void Localitate::afisare()
{
    cout<<"Nume:\t"<<nume<<endl;
     cout<<"Nr_locuit:\t"<<nr_locuitori<<endl;
      cout<<"Venit_med:\t"<<venit_mediu<<endl;
}














