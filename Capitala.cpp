#include "Capitala.hpp"

Capitala::Capitala() {
    tara = NULL;
}

Capitala::Capitala(const Capitala &obj) {
    *this = obj;
}

Capitala::Capitala(const char *tara, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : Oras(
        bonus_venit, nume, nr_locuitori, venit_mediu) {
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala &Capitala::operator=(const Capitala &obj) {
    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, tara);
    this->bonus_venit = obj.bonus_venit;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
    return *this;
}

Capitala::~Capitala() {
    delete[]nume;
    delete[]tara;
}