#include "municipiu.hpp"

Municipiu::Municipiu():Oras()
{
    regiune = NULL;
}
Municipiu::Municipiu(const char *nume, int locuitori, int venit, int bonus, const char *regiune) : Oras(nume, locuitori, venit, bonus)
{
    this->regiune = new char[strlen(regiune)+1];
	strcpy(this->regiune, regiune);
}
Municipiu &Municipiu::operator=(const Municipiu &obj)
{
    Localitate::operator=(obj);
    Oras::operator=(obj);
    if (regiune != NULL)
        delete[] regiune;
    regiune = new char[strlen(obj.regiune) + 1];
    strcpy(regiune, obj.regiune);
    return *this;
}
char* Municipiu::getRegiune()
{
	return regiune;
}
Municipiu::~Municipiu()
{
    delete []regiune;
}

void Municipiu::afisare(ostream &out)
{
    Oras::afisare(out);
    out <<"Regiune: "<<regiune<<endl; //
}

ostream &operator<<(ostream &out, Municipiu &obj)
{
    obj.afisare(out);
    return out;
}
