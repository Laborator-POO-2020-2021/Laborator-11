#include "Capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL)
{

}

Capitala::Capitala(char* tara, int bonus_venit, char* nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
    if (this->tara != NULL)
        delete []this->tara;

    this->tara = new char [strlen (tara)+1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala()
{

}

void Capitala::afisare()
{
    cout << "TARA: " << tara << endl;
    Oras::afisare();
}

Capitala& Capitala:: operator=(const Capitala &x)
{
    if (this->tara != NULL)
        delete []this->tara;

    this->tara = new char[strlen(x.tara)+1];
    strcpy(this->tara, x.tara);

    (Oras&) *this = (Oras&) x;

    return *this;
}
