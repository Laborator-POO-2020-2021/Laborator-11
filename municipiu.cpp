#include "municipiu.hpp"

Municipiu::Municipiu() : Oras()
{
    regiune = NULL;
}

Municipiu::Municipiu(const char *nume, int locuitori, int venit, int bonus, const char *regiune) : Oras(nume, locuitori, venit, bonus)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::Municipiu(const Municipiu &obj) : Oras(obj)
{
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);
}

Municipiu::~Municipiu()
{
    if (regiune != NULL)
        delete[] regiune;
}

Municipiu &Municipiu::operator=(const Municipiu &obj)
{
    Oras::operator=(obj);
    if (regiune != NULL)
        delete[] regiune;
    regiune = new char[strlen(obj.regiune) + 1];
    strcpy(regiune, obj.regiune);
    return *this;
}

void Municipiu::print(ostream &out)
{
    Oras::print(out);
    out << endl
        << "Regiunea " << regiune;
}

ostream &operator<<(ostream &out, Municipiu &obj)
{
    obj.print(out);
    return out;
}

int Municipiu::getVenit_mediu() const
{
    return Oras::getVenit_mediu();
}