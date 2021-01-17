#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL)
{}

Municipiu::Municipiu(const char* nume, int locuitori, int venit_mediu, int bonus_venit, const char* regiune):
    Oras(nume, locuitori, venit_mediu, bonus_venit)
{
    this ->regiune = new char [strlen(regiune +1)];
    strcpy(this ->regiune, regiune);
}

Municipiu::Municipiu (const Municipiu& obj)
{
    (Oras&) *this = (Oras&) obj;
    regiune = new char[strlen(obj.regiune+1)];
    strcpy(regiune, obj.regiune);
}

Municipiu::~Municipiu()
{
    delete []regiune;
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
    (Oras&) *this = (Oras&) obj;
    if (regiune != NULL)
        delete []regiune;
    regiune = new char[strlen(obj.regiune+1)];
    strcpy(regiune, obj.regiune);
    return *this;
}

void Municipiu::afisare()
{
    (*this).Oras::afisare();
    cout<<" "<<regiune;
}

int Municipiu::getVenit()
{
    return (*this).Oras::getVenit();
}
