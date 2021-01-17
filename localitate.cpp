#include "localitate.hpp"

Localitate::Localitate() : nume(NULL), nr_locuitori(0), venit_mediu(0){}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu) : nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

Localitate::Localitate(const Localitate &obj)
{
    nume = NULL;
    *this = obj;
}

Localitate& Localitate::operator =(const Localitate &obj)
{
    if(nume != NULL)
    {
        delete[] nume;
    }
	nume = new char[strlen(obj.nume) + 1];
	strcpy(nume, obj.nume);
    nr_locuitori = obj.nr_locuitori;
    venit_mediu = obj.venit_mediu;

	return *this;
}

Localitate::~Localitate()
{
    delete[] nume;
}

int Localitate::getNr_locuitori() const
{
    return nr_locuitori;
}

int Localitate::getVenit_mediu() const
{
    return venit_mediu;
}

void Localitate::afisare()
{
    cout << "\tNume: " << nume << endl;
    cout << "\tNumar locuitori: " << nr_locuitori << endl;
    cout << "\tVenit mediu: " << venit_mediu << endl;
}
