#include "capitala.hpp"

Capitala::Capitala()
{
    tara = NULL;
}

Capitala::Capitala(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *tara):Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->tara = new char[strlen(tara)+1];
    strcpy(this->tara, tara);
}

Capitala::Capitala(const Capitala &obj)
{
    this->tara = new char[strlen(obj.tara)+1];
    strcpy(this->tara, obj.tara);
}

Capitala& Capitala::operator=(const Capitala &obj)
{
    Localitate::operator=(obj);
    Oras::operator=(obj);

    if(obj.tara == NULL)
        this->tara = NULL;
    else
    {
        if(this->tara != NULL)
            delete []this->tara;
        this->tara = new char[strlen(obj.tara)+1];
        strcpy(this->tara, obj.tara);
    }
    return *this;
}

int Capitala::Get_venit()
{
    return (this->venit_mediu + this->bonus_venit);
}

int Capitala::Get_nr_locuitori()
{
    return this->nr_locuitori;
}

void Capitala::afisare()
{
    Oras::afisare();
    cout << "Tara: ";
    if(this->tara != NULL)
        cout << this->tara << endl;
    else
        cout << "NULL" << endl;
}

Capitala::~Capitala()
{
    delete []tara;
}
