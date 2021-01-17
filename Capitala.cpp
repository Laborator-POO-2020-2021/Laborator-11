#include "Capitala.hpp"

Capitala::Capitala() : Oras(), tara(NULL) {}

Capitala::Capitala(const char *nume, int nr_loc, int v_mediu, int bonus_v, const char *t) : 
              Oras(nume, nr_loc, v_mediu, bonus_v), Localitate(nume, nr_loc, v_mediu)
{
    this->tara = new char[strlen(t) + 1];
    strcpy(this->tara, t);
}
Capitala::Capitala(const Capitala &obj)
{
    tara = NULL;
    *this = obj;
}
Capitala &Capitala::operator=(const Capitala &obj)
{
    Oras::operator=(obj);
    if (tara != NULL)
        delete[] tara;
    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, obj.tara);

    return *this;
}
void Capitala::afisare()
{
    Oras::afisare();
    cout << "Nume tara = ";
    if (tara != NULL)
        cout << tara << endl;
}
Capitala::~Capitala()
{
    if (tara != NULL)
        delete[] tara;
}