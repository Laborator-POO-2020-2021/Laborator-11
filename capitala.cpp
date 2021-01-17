#include "capitala.hpp"

Capitala::Capitala():Oras()
{
    tara = NULL;
}
Capitala::Capitala(const char *nume, int locuitori, int venit, int extra, const char *tara) : Oras(nume, locuitori, venit, extra)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}
Capitala& Capitala::operator=(const Capitala & obj)
{
    Localitate::operator=(obj);
    Oras::operator=(obj);
    if (tara != NULL)
        delete[] tara;
    tara = new char[strlen(obj.tara) + 1];
    strcpy(tara, obj.tara);
    return *this;
}
char* Capitala::getTara()
{
	return tara;
}
Capitala::~Capitala()
{
    delete[] tara;
}

void Capitala::afisare(ostream &out)
{
    Oras::afisare(out);
    out <<" Tara: "<<tara;
}
ostream &operator<<(ostream &out, Capitala &obj)
{
    obj.afisare(out);
    return out;
}