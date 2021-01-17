#include "localitate.hpp"

Localitate::Localitate()
{
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu)
{
    this->nume = new char[strlen(nume)+1];
    strcpy(this->nume, nume);

    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::Localitate(const Localitate &obj)
{
    this->nume = new char[strlen(obj.nume)+1];
    strcpy(this->nume, obj.nume);

    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
}

Localitate& Localitate::operator=(const Localitate &obj)
{
    if(obj.nume == NULL)
        this->nume = NULL;
    else
    {
        if(this->nume != NULL)
            delete []this->nume;
        this->nume = new char[strlen(obj.nume)+1];
        strcpy(this->nume, obj.nume);
    }
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;

    return *this;
}

int Localitate::Get_venit()
{
    return this->venit_mediu;
}

int Localitate::Get_nr_locuitori()
{
    return this->nr_locuitori;
}

void Localitate::afisare()
{
    cout << "Nume: ";
    if(this->nume != NULL)
        cout << this->nume << endl;
    else
        cout << "NULL" << endl;
    cout << "Populatie: " << this->nr_locuitori << endl;
    cout << "Venit mediu: " << this->venit_mediu << endl;
}

Localitate::~Localitate()
{
    delete []nume;
}
