#include "capitala.hpp"

Capitala::Capitala() : Oras() { tara = NULL; }
Capitala::Capitala(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *tara) : Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}
Capitala::~Capitala() { delete[] tara; }
char *Capitala::getTara() { return tara; }
void Capitala::afisare()
{
    cout << "Capitala " << Localitate::getNume()
         << " a tarii " << tara
         << " cu " << Localitate::getNumarLocuitori()
         << " locuitori avand " << Localitate::getVenit() + Oras::getBonus()
         << " lei venit mediu care include bonusul de " << Oras::getBonus() << "lei.\n";
}