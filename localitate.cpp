#include "localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu) {
    this->nume = new char[strlen(nume)  +1];
    strcpy(this->nume, nume);

    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::~Localitate() {
    delete []nume;
}


void Localitate::afisare(){
    cout << "Nume: " << nume <<"      \t";
    cout << "nr. locuitori: " << nr_locuitori << "     \t";
    cout << "venit mediu: " << venit_mediu << "     \t";
}

int Localitate::getLoc(){
    return this->nr_locuitori;
}

int Localitate::getVenit(){
    return this->venit_mediu;
}