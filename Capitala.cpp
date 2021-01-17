#include "Capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL)
{}

Capitala::Capitala(const char* nume, int locuitori, int venit_mediu, int bonus_venit, const char* tara):
    Oras(nume, locuitori, venit_mediu, bonus_venit)
{
    this ->tara = new char [strlen(tara +1)];
    strcpy(this ->tara, tara);
}

Capitala::Capitala (const Capitala& obj)
{
    (Oras&) *this = (Oras&) obj;
    tara = new char[strlen(obj.tara+1)];
    strcpy(tara, obj.tara);
}

Capitala::~Capitala()
{
    delete []tara;
}

Capitala& Capitala::operator=(const Capitala& obj)
{
    (Oras&) *this = (Oras&) obj;
    if (tara != NULL)
        delete []tara;
    tara = new char[strlen(obj.tara+1)];
    strcpy(tara, obj.tara);
    return *this;
}

void Capitala::afisare()
{
    (*this).Oras::afisare();
    cout<<" "<<tara;
}

int Capitala::getVenit()
{
    return (*this).Oras::getVenit();
}

