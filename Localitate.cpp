#include "Localitate.hpp"

Localitate::Localitate() {
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::Localitate(const Localitate &obj) {
    *this = obj;
}

Localitate &Localitate::operator=(const Localitate &obj) {
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
}

int Localitate::get_nr_locuitori() {
    return nr_locuitori;
}

int Localitate::get_venit_mediu() {
    return venit_mediu;
}

char *Localitate::get_nume() {
    return nume;
}

Localitate::~Localitate() {
    delete[]nume;
}