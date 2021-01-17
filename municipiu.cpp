#include "municipiu.hpp"

Municipiu::Municipiu() : Oras(), regiune(nullptr) {}

Municipiu::Municipiu(const char *nume,const int nr_locuitori,const int venit_mediu,const int bonus_venit, const char *regiune) : Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this -> regiune = new char [strlen(regiune) + 1];
    strcpy (this -> regiune, regiune);
}

Municipiu& Municipiu::operator = (Municipiu& obj)
{
    Oras::operator = (obj);
    if (regiune != nullptr)
        delete []regiune;
    this -> regiune = new char [strlen(obj.regiune) + 1];
    strcpy (this -> regiune, obj.regiune);

    return *this;
}

void Municipiu::afisare()
{
    Oras::afisare();
    cout << "Regiunea : " << regiune << endl;
}

int Municipiu::getLocuitori()
{
    return Oras::getLocuitori();
}

int Municipiu::getVenit()
{
    return Oras::getVenit();
}

Municipiu::~Municipiu()
{
    delete []regiune;
}
