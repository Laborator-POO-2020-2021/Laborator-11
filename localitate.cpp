#include "localitate.hpp"

Localitate::Localitate (): nume (NULL), nr_locuitori (0), venit_mediu (0){}

Localitate::Localitate (const char *nume, const int nr_locuitori, const int venit_mediu)
{
    this->nume = new char[strlen (nume) + 1];
    strcpy (this->nume, nume);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate& Localitate::operator = (Localitate &obj)
{
    if (nume != NULL)
        delete[]nume;
    nume = new char [strlen(obj.nume)+1];
    strcpy (nume, obj.nume);
    venit_mediu = obj.venit_mediu;
    nr_locuitori = obj.nr_locuitori;

    return *this;
}

void Localitate::print()
{
    cout << "Numele localitatii este: " << nume << endl;
    cout << "Numarul de locuitori este: " << nr_locuitori << " si au salariul mediu de: " << venit_mediu <<"$"<< endl;
}

double Localitate::Get_Population ()
{
    return nr_locuitori;
}

double Localitate::Get_Venit ()
{
    return venit_mediu;
}

Localitate::~Localitate ()
{
    delete []nume;
}