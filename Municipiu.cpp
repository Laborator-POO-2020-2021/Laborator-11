#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL)
{

}

Municipiu::Municipiu(char* regiune, int bonus_venit, char* nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
    if (this->regiune != NULL)
        delete []this->regiune;

    this->regiune = new char [strlen (regiune)+1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu()
{

}

void Municipiu::afisare()
{
    cout << "REGIUNE: " << regiune << endl;
    Oras::afisare();
}

Municipiu& Municipiu:: operator=(const Municipiu &x)
{
    if (this->regiune != NULL)
        delete []this->regiune;

    this->regiune = new char[strlen(x.regiune)+1];
    strcpy(this->regiune, x.regiune);

    (Oras&) *this = (Oras&) x;

    return *this;
}
