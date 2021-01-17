#include "Capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL) {}

Capitala::Capitala(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, char *tara):
          Oras(nume, nr_locuitori, venit_mediu, bonus_venit) {
        this->tara = new char[strlen(tara) + 1];
        strcpy(this->tara, tara);
    }

/* int Capitala::getVenitMediu() {
    return Oras::getVenitMediu();
} */

void Capitala::afisare() {
    Oras::afisare();
    cout << tara << ";";
}

Capitala::~Capitala() {
    if (nume != NULL)
        delete[]nume;
    if (tara != NULL)
        delete[]tara;
}