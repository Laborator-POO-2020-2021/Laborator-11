#include "Capitala.hpp"

Capitala::Capitala(): Oras()
{
    tara = NULL;
}

Capitala::Capitala(const char* nume, const int nr_locuitori, const int venit, const int bonus, const char* tara): Oras(nume, nr_locuitori, venit, bonus)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala()
{
    delete []tara;
}

Capitala& Capitala::operator=(Capitala& x)
{
    Oras::operator=(x);

    if(tara != NULL)
        delete []tara;
    tara = new char[strlen(x.tara) + 1];
    strcpy(tara, x.tara);

    return *this;
}

double Capitala::Populatie()
{
    return Localitate::Populatie();
}

double Capitala::Venit()
{
    return Oras::Venit();
}

void Capitala::afisare()
{
    Oras::afisare();

    cout<<"Tara este: "<<tara<<'\n'<<'\n';
}
