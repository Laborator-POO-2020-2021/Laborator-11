#include "Municipiu.hpp"

Municipiu::Municipiu(): Oras()
{
    regiune = NULL;
}

Municipiu::Municipiu(const char* nume, const int nr_locuitori, const int venit, const int bonus, const char* regiune): Oras(nume, nr_locuitori, venit, bonus)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu()
{
    delete []regiune;
}

Municipiu& Municipiu::operator= (Municipiu &x)
{
    Oras::operator= (x);
    if(regiune != NULL)
        delete []regiune;

    regiune = new char[strlen(x.regiune) + 1];
    strcpy(regiune, x.regiune);

    return *this;
}

double Municipiu::Populatie()
{
    return Localitate::nr_locuitori;
}

double Municipiu::Venit()
{
    return Oras::venit_mediu;
}

void Municipiu::afisare()
{
    Oras::afisare();

    cout<<"Regiunea: "<<regiune<<'\n';
}
