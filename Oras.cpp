#include "Oras.hpp"

Oras::Oras() : bonus_venit(0) {}

Oras::Oras(int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu) : Localitate(nume, nr_locuitori, venit_mediu) {
    this->bonus_venit = bonus_venit;
}
Oras::~Oras() {}

int Oras::getBonusVenit() {
    return this->bonus_venit;
}

int Oras::getVenitFinal() {
    return Localitate::getVenit() + bonus_venit;
}

void Oras::Write() {
    cout << "-----Oras-----" << endl;
    cout << "Nume: " << Localitate::getNume() << endl;
    cout << "Numar Locuitori: " << Localitate::getLocuitori() << endl;
    cout << "Venit Mediu: " << getVenitFinal() << endl;
    cout << "Din care in acest venit mediu, avem un venit bonus de: " << this->bonus_venit << endl;
}