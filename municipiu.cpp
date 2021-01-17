#include "municipiu.hpp"

Municipiu::Municipiu() : Oras(), regiune(NULL){}

Municipiu::Municipiu(const char *regiune, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : /*Localitate(nume, nr_locuitori, venit_mediu),*/ Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::Municipiu(const Municipiu &obj)
{
    regiune = NULL;
    *this = obj;
}

Municipiu& Municipiu::operator =(const Municipiu &obj)
{
    Oras::operator =(obj);
    if(regiune != NULL)
    {
        delete[] regiune;
    }
	regiune = new char[strlen(obj.regiune) + 1];
	strcpy(regiune, obj.regiune);

	return *this;
}

Municipiu::~Municipiu()
{
    delete[] regiune;
}

void Municipiu::afisare()
{
    cout << "\tRegiune: " << regiune << endl;
    Oras::afisare();
}

