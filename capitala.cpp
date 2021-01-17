#include "capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL) {}

Capitala::Capitala(const char* n, int nr, int venit, int bonus, const char* tara): Oras(n, nr, venit, bonus)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);   
}

Capitala::Capitala(const Capitala& c)
{
    this->tara = NULL;
    (*this) = c;
}

Capitala::~Capitala()
{
    delete[] this->tara;
}

Capitala& Capitala::operator=(const Capitala& c)
{
    (Oras&)(*this) = (Oras&)c;
    if(this->tara != NULL)
        delete[] this->tara;
    this->tara = new char[strlen(c.tara) + 1];
    strcpy(this->tara, c.tara);

    return *this;
}

ostream& operator<<(ostream& out, const Capitala& c)
{
    out << (Oras&)c;
    out << "TARA: " << c.tara << endl;

    return out;
}

int Capitala::getVenitMediu()
{
    return Oras::getVenitMediu();
}
