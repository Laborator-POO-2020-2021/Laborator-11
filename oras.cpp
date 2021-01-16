#include "oras.hpp"
Oras::Oras() : Localitate() { bonus_venit = -1; };
Oras::Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit) : Localitate(nume, nr_locuitori, venit_mediu) { this->bonus_venit = bonus_venit; };
Oras::~Oras(){};
int Oras::getVenit() { return Localitate::getVenit() + bonus_venit; };
void Oras::afisare()
{
    cout << "Orasul " << Localitate::getNume()
         << " cu " << Localitate::getNumarLocuitori()
         << " locuitori avand " << Localitate::getVenit() + bonus_venit
         << " lei venit mediu care include bonusul de " << bonus_venit << "lei.\n";
};
int Oras::getBonus() { return bonus_venit; };