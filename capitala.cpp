#include "capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL)
{

}

Capitala::Capitala(const char *nume, const int nr_locuitori, const int  venit_mediu, const int bonus_venit, const char *tara):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{

    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);

}

Capitala::Capitala(const Capitala &obj):Oras(obj)
{

    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, obj.tara);

}

Capitala::~Capitala()
{

    delete[] tara;

}

Capitala &Capitala::operator=(const Capitala &obj)
{

    Oras::operator=(obj);

    if(tara != NULL)
        delete[] tara;

    tara = new char[strlen(obj.tara) + 1];
    strcpy(tara, obj.tara);

    return *this;

}

void Capitala::afisare(ostream &out)
{

    Oras::afisare(out);

    out << " Tara: " << tara;

}

ostream &operator<<(ostream &out, Capitala &obj)
{
    obj.afisare(out);
    return out;
}

int Capitala::getVenit_mediu()
{

    return Oras::getVenit_mediu();

}