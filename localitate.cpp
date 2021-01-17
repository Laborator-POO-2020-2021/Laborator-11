#include "localitate.hpp"

Localitate::Localitate()
{
    this->nume = new char[100];
    //this->nume = NULL;
    //this->nr_locuitori = 0;
    //this->venit_mediu = 0;
}

Localitate::Localitate(const char *nume, const int locuitori, const int venit)
{
    if (this->nume != NULL)
        delete[] this->nume;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->nr_locuitori = locuitori;
    this->venit_mediu = venit;
}

Localitate::~Localitate()
{
    delete[] this->nume;
}

Localitate& Localitate::operator=(const Localitate &obj)
{
    if (this->nume != NULL)
        delete[] this->nume;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
    return *this;
}

int Localitate::get_populatie()
{
    return this->nr_locuitori;
}

int Localitate::get_venit()
{
    return this->venit_mediu;
}

void Localitate::print()
{
    cout << "NUME: " << this->nume << endl;
    cout << "NUMAR LOCUITORI: " << this->nr_locuitori << endl;
    cout << "VENIT MEDIU: " << this->venit_mediu << endl;
}