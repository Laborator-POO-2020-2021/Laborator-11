#include "municipiu.hpp"

Municipiu::Municipiu() : Oras(), regiune(nullptr) {}

Municipiu::Municipiu(const char *nume, int nr_locuitori, int venit_mediu, int bonus_oras, const char *regiune) : Oras(nume, nr_locuitori, venit_mediu, bonus_oras)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu() { delete[] this->regiune; }

Municipiu::Municipiu(const Municipiu &obj)
{
    regiune = nullptr;
    (*this) = obj;
}

Municipiu &Municipiu::operator=(const Municipiu &obj)
{
    (Oras &)(*this) = (Oras &)obj;
    if (this->regiune != nullptr)
        delete[] this->regiune;
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);

    return *this;
}

ostream &operator<<(ostream &out, const Municipiu &obj)
{
    out << (Oras &)obj;
    if (obj.regiune != nullptr)
        out << "Regiune : " << obj.regiune << " ||| ";
    else
        out << " regiune neinregistrata ||| ";
    return out;
}