#include "municipiu.hpp"

Municipiu::Municipiu(): Oras(), regiune(NULL) {}

Municipiu::Municipiu(const char* name, int nrLoc, int venit, int bonus, const char* reg): Oras(name, nrLoc, venit, bonus) 
{
    this->regiune = new char[strlen(reg) + 1];
    strcpy(this->regiune, reg);
}

Municipiu::Municipiu(const Municipiu& obj)
{
    this->regiune = NULL;
    (*this) = obj;
}

Municipiu::~Municipiu()
{
    delete[] regiune;
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
    (Oras&)(*this) = (Oras&)obj;
    if(this->regiune != NULL)
        delete[] this->regiune;
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);

    return *this;
}

ostream& operator<<(ostream& out, const Municipiu& obj)
{
    out << (Oras&)obj;
    out << "Regiunea este: " << obj.regiune << endl;

    return out;
}

int Municipiu::getVenitMediu()
{
    return Oras::getVenitMediu();
}
