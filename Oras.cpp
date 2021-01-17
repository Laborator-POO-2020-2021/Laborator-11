#include "Oras.hpp"

Oras::Oras() {
    bonus_venit = 0;
}

Oras::Oras(const Oras &obj) {
    *this = obj;
}

Oras::Oras(int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : Localitate(nume, nr_locuitori,
                                                                                              venit_mediu) {
    this->bonus_venit = bonus_venit;
}


Oras &Oras::operator=(const Oras &obj) {
    this->bonus_venit = obj.bonus_venit;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
}

Oras::~Oras() {
    delete[]nume;
}
