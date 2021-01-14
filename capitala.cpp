#include "capitala.hpp"

Capitala::Capitala (): Oras (), tara (nullptr) {}

Capitala::Capitala (const char*nume, const int nr_loc, const int venit, const int bonus, const char *tara): Oras (nume,nr_loc,venit,bonus)
{
    this->tara = new char [strlen (tara)+1];
    strcpy (this->tara, tara);
}


Capitala& Capitala::operator = (Capitala& obj)
{
    Oras::operator = (obj);
    if (tara != NULL)
        delete[]tara;
    tara = new char [strlen (obj.tara) + 1];
    strcpy (tara, obj.tara);

    return *this;
}

ostream& operator << (ostream &out, Capitala &obj)
{
    out << (Oras&)obj;
    out << "Tara este: "<< obj.tara << endl;

    return out;
}

double Capitala::Get_Population ()
{
    return Localitate::Get_Population ();
}

double Capitala::Get_Venit ()
{
    return Oras::Get_Venit ();
}


Capitala::~Capitala ()
{
    delete[]tara;
}