#include "capitala.hpp"

Capitala::Capitala() : Oras(), tara(NULL){}

Capitala::Capitala(const char *tara, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : /*Localitate(nume, nr_locuitori, venit_mediu),*/ Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::Capitala(const Capitala &obj)
{
    tara = NULL;
    *this = obj;
}

Capitala& Capitala::operator =(const Capitala &obj)
{
    Oras::operator =(obj);
    if(tara != NULL)
    {
        delete[] tara;
    }
	tara = new char[strlen(obj.tara) + 1];
	strcpy(tara, obj.tara);

	return *this;
}

Capitala::~Capitala()
{
    delete[] tara;
}

void Capitala::afisare()
{
    cout << "\tTara: " << tara << endl;
    Oras::afisare();
}
