//
// Created by 40763 on 1/16/2021.
//

#include "Localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0){
}

Localitate::Localitate(char *nume, int nr_loc, int venit):nr_locuitori(nr_loc), venit_mediu(venit){
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

Localitate::Localitate(const Localitate& loc) {
    this->nume = NULL;
    *this = loc;
}

Localitate &Localitate::operator=(const Localitate& loc) {
    this->nume = new char[strlen(loc.nume) + 1];
    this->nume = loc.nume;
    this->venit_mediu = loc.venit_mediu;
    this->nr_locuitori = loc.nr_locuitori;

    return *this;
}

Localitate::~Localitate() {
    delete []nume;
}

int Localitate::getNrLoc() {
    return this->nr_locuitori;
}

int Localitate::getVenit() {
    return this->venit_mediu;
}

char *Localitate::getNume() {
    return this->nume;
}




