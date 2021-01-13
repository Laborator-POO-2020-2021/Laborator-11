#include "capitala.hpp"

Capitala::Capitala() : Oras()
{
    tara = NULL;
}

Capitala::Capitala(const char *nume, int locuitori, int venit, int extra, const char *tara) : Oras(nume, locuitori, venit, extra)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::Capitala(const Capitala &obj) : Oras(obj)
{
    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, obj.tara);
}

Capitala::~Capitala()
{
    if (tara != NULL)
        delete[] tara;
}

Capitala &Capitala::operator=(const Capitala &obj)
{
    Oras::operator=(obj);
    if (tara != NULL)
        delete[] tara;
    tara = new char[strlen(obj.tara) + 1];
    strcpy(tara, obj.tara);
    return *this;
}

void Capitala::print(ostream &out)
{
    Oras::print(out);
    out << endl
        << "Tara " << tara;
}

ostream &operator<<(ostream &out, Capitala &obj)
{
    obj.print(out);
    return out;
}

int Capitala::getVenit_mediu() const
{
    return Oras::getVenit_mediu();
}