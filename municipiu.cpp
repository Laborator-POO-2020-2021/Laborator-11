#include "municipiu.hpp"

Municipiu::Municipiu(): Oras(), regiune(NULL) {}

Municipiu::Municipiu(const char* n, int nr, int venit, int bonus, const char* r): Oras(n, nr, venit, bonus) 
{
    this->regiune = new char[strlen(r) + 1];
    strcpy(this->regiune, r);
}

Municipiu::Municipiu(const Municipiu& m)
{
    this->regiune = NULL;
    (*this) = m;
}

Municipiu::~Municipiu()
{
    delete[] regiune;
}

Municipiu& Municipiu::operator=(const Municipiu& m)
{
    (Oras&)(*this) = (Oras&)m;
    if(this->regiune != NULL)
        delete[] this->regiune;
    this->regiune = new char[strlen(m.regiune) + 1];
    strcpy(this->regiune, m.regiune);

    return *this;
}

ostream& operator<<(ostream& out, const Municipiu& m)
{
    out << (Oras&)m;
    out << "REGIUNE: " << m.regiune << endl;

    return out;
}

int Municipiu::getVenitMediu()
{
    return Oras::getVenitMediu();
}