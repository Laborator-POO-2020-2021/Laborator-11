#include "localitate.hpp"

Localitate::Localitate() : nume(nullptr), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char *nume,const int nr_locuitori,const int venit_mediu)
{
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
    this -> nume = new char [strlen(nume) + 1];
    strcpy (this -> nume, nume);
}

Localitate& Localitate::operator = ( Localitate& obj)
{
    if (nume != nullptr)
        delete []nume;
    this -> nume = new char [strlen(obj.nume) + 1];
    strcpy (this -> nume, obj.nume);
    this -> nr_locuitori = obj.nr_locuitori;
    this -> venit_mediu = obj.venit_mediu;

    return *this;
}

void Localitate::afisare()
{
    cout << "Nume : " << nume << endl << "Numar de locuitori : " << nr_locuitori << endl << "Venitul mediu : " << venit_mediu << endl;
}

int Localitate::getLocuitori()
{
    return nr_locuitori;
}

int Localitate::getVenit()
{
    return venit_mediu;
}

Localitate::~Localitate()
{
    delete []nume;
}
