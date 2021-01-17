#include "localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char* nume, int nr, int v): nr_locuitori(nr), venit_mediu(v)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}


Localitate::Localitate(const Localitate& obj)       //DE VERIFICAT
{
    this->nume = NULL;
    *this = obj;
}

Localitate::~Localitate()
{
    delete[] nume;
}

Localitate& Localitate::operator=(const Localitate& obj)
{
    if(nume != NULL)
        delete[] nume;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;

    return *this;
}

int Localitate::getLocuitori() const
{
    return this->nr_locuitori;
}

ostream& operator<<(ostream& out, const Localitate& obj)
{
    out << "NUME LOCALITATE: " << obj.nume << endl;
    out << "NR LOCUITORI: " << obj.nr_locuitori << endl;
    out << "VENIT: " << obj.venit_mediu << endl;

    return out;
}



