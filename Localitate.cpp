#include "Localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0)
{}

Localitate::Localitate(const char* nume, int locuitori, int venit)
{
    nr_locuitori = locuitori;
    venit_mediu = venit;
    this ->nume = new char[strlen(nume+1)];
    strcpy(this ->nume,nume);
}

Localitate::Localitate (const Localitate& obj)
{
    this ->nr_locuitori = obj.nr_locuitori;
    this ->venit_mediu = obj.venit_mediu;

    this ->nume = new char[strlen(obj.nume+1)];
    strcpy(this ->nume, obj.nume);
}

Localitate::~Localitate()
{
    delete []nume;
}

Localitate& Localitate::operator= (const Localitate& obj)
{
    this ->nr_locuitori = obj.nr_locuitori;
    this ->venit_mediu = obj.venit_mediu;
    if (this ->nume != NULL)
        delete []this ->nume;

    this ->nume = new char[strlen(obj.nume+1)];
    strcpy(this ->nume, obj.nume);

    return *this;
}

void Localitate::afisare()
{
    if (this ->nume == NULL) cout<<"______ ";
        else cout<<this->nume<<" ";

    cout<<this ->nr_locuitori<<" "<<this ->venit_mediu;
}

int Localitate::getLoc()
{
    return nr_locuitori;
}

int Localitate::getVenit()
{
    return venit_mediu;
}
