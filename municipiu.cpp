#include "municipiu.hpp"

Municipiu::Municipiu (): Oras (), regiune (NULL) {}

Municipiu::Municipiu (const char *nume, const int nr_loc, const int venit, const int bonus, const char *regiune): Oras (nume,nr_loc,venit,bonus)
{
    this->regiune = new char [strlen (regiune) + 1];
    strcpy (this->regiune, regiune);
}

Municipiu& Municipiu::operator = (Municipiu &obj)
{
    Oras::operator = (obj);
    if (regiune != NULL)
        delete []regiune;
    regiune = new char [strlen (obj.regiune) + 1];
    strcpy (regiune, obj.regiune);

    return *this;
}

ostream& operator << (ostream &out, Municipiu &obj)
{
    out << (Oras&)obj;
    out << "Regiunea este: " << obj.regiune << endl;

    return out;
}

double Municipiu::Get_population ()
{
    return Localitate::Get_Population ();
}

double Municipiu::Get_Venit ()
{
    return Oras::Get_Venit ();
}

Municipiu::~Municipiu ()
{
    delete []regiune;
}