#include "capitala.hpp"

Capitala::Capitala() : Oras(), tara(nullptr) {}

Capitala::Capitala(const char *nume,const int nr_locuitori,const int venit_mediu,const int bonus_venit, const char *tara) : Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this -> tara = new char [strlen(tara) + 1];
    strcpy (this -> tara, tara);
}

Capitala& Capitala::operator = (Capitala& obj)
{
    Oras::operator = (obj);
    if (tara != nullptr)
        delete []tara;
    this -> tara = new char [strlen(obj.tara) + 1];
    strcpy (this -> tara, obj.tara);

    return *this;
}

void Capitala::afisare()
{
    Oras::afisare();
    cout << "Tara : " << tara << endl;
}

int Capitala::getLocuitori()
{
    return Oras::getLocuitori();
}

int Capitala::getVenit()
{
    return Oras::getVenit();
}

Capitala::~Capitala()
{
    delete []tara;
}
