#include "capitala.hpp"

Capitala::Capitala():Oras(), tara(nullptr){}


Capitala::Capitala(const char *nume, int nr_locuitori, int venit_mediu, int bonus_oras, const char *tara) : Oras(nume, nr_locuitori, venit_mediu, bonus_oras)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala() { delete[] this->tara; }

Capitala::Capitala(const Capitala &obj)
{
    tara = nullptr;
    (*this) = obj;
}

Capitala &Capitala::operator=(const Capitala &obj)
{
    (Oras &)(*this) = (Oras &)obj;
    if (this->tara != nullptr)
        delete[] this->tara;
    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, obj.tara);

    return *this;
}

ostream &operator<<(ostream &out, const Capitala &obj)
{
    out << (Oras &)obj;
    if (obj.tara != nullptr)
        out << "Regiune : " << obj.tara << " ||| ";
    else
        out << " regiune neinregistrata ||| ";
    return out;
}