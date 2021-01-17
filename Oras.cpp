#include "Oras.hpp"

Oras::Oras(): Localitate() {}

Oras::Oras(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit): Localitate(nume, nr_locuitori, venit_mediu),
      bonus_venit(bonus_venit) {}

int Oras::getVenitMediu() {
      return Localitate::getVenitMediu() + bonus_venit;
}

void Oras::afisare() {
      Localitate::afisare();
      cout << bonus_venit << "; ";
}

Oras::~Oras() {
      if (nume != NULL)
            delete[]nume;
}