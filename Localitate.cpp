#include "Localitate.hpp"

Localitate::Localitate(): nume(NULL) {}

Localitate::Localitate(char *nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori),
            venit_mediu(venit_mediu) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    }

int Localitate::getNrLocuitori() {
    return nr_locuitori;
}

int Localitate::getVenitMediu() {
    return venit_mediu;
}

void Localitate::afisare() {
    cout << nume <<"; ";
    cout << nr_locuitori <<"; ";
    cout << venit_mediu << "; ";
}

Localitate::~Localitate() {
    if (nume != NULL)
        delete[]nume;
}