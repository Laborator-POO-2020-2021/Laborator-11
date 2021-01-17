#include "capitala.hpp"

Capitala::Capitala() : Oras()
{
    this->tara = new char[100];
    this->tara = NULL;
}

Capitala::Capitala(const char *nume, const int locuitori, const int venit, const int bonus, const char *tara) : Oras(nume, locuitori, venit, bonus)
{
    if (this->tara != NULL)
        delete[] this->tara;
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala& Capitala::operator=(const Capitala &obj)
{
    if (this->tara != NULL)
        delete[] this->tara;
    this->tara = new char[100];
    strcpy(this->tara, obj.tara);
    if (this->nume != NULL)
        delete[] this->nume;
    this->nume = new char[100];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
    this->bonus_venit = obj.bonus_venit;
    return *this;
}

Capitala::~Capitala()
{
    delete[] this->tara;
}

int Capitala::get_venit()
{
    return Oras::get_venit();
}

int Capitala::get_populatie()
{
    return Oras::get_populatie();
}

void Capitala::print()
{
    Oras::print();
    cout << "TARA: " << this->tara << endl;
}