#include "municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL)
{

}

Municipiu::Municipiu(const char *nume, const int nr_locuitori, const int venit_mediu, const int bonus_venit, const char *regiune):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{

    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);

}

Municipiu::Municipiu(const Municipiu &obj):Oras(obj)
{

    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);

}

Municipiu::~Municipiu()
{

    delete[] regiune;

}

Municipiu &Municipiu::operator=(const Municipiu &obj)
{

    Oras::operator=(obj);

    if(regiune != NULL)
        delete[] regiune;

    regiune = new char[strlen(obj.regiune) + 1];
    strcpy(regiune, obj.regiune);

    return *this;

}

void Municipiu::afisare(ostream &out)
{

    Oras::afisare(out);

    out << " Regiune: " << regiune;

}

ostream &operator<<(ostream &out, Municipiu &obj)
{
    obj.afisare(out);
    return out;
}

int Municipiu::getVenit_mediu()
{

    return Oras::getVenit_mediu();

}