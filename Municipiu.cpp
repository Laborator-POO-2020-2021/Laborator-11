#include "Municipiu.hpp"

Municipiu::Municipiu() {
    regiune = NULL;
}

Municipiu::Municipiu(const Municipiu &obj) {
    *this = obj;
}

Municipiu::Municipiu(const char *regiune, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : Oras(
        bonus_venit, nume, nr_locuitori, venit_mediu) {
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu &Municipiu::operator=(const Municipiu &obj) {
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, regiune);
    this->bonus_venit = obj.bonus_venit;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
    return *this;
}

Municipiu::~Municipiu() {
    delete[]nume;
    delete[]regiune;
}