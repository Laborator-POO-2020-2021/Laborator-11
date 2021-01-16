//
// Created by 40763 on 1/16/2021.
//

#include "Capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL) {
}

Capitala::Capitala(char* name, int nr_loc, int venit, int bonus, char* tara): Oras(nume,nr_loc,venit,bonus) {
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala &Capitala::operator=(Capitala &cap) {
    this->nume = new char[strlen(cap.nume) + 1];
    strcpy(this->nume, nume);

    return *this;
}

Capitala::~Capitala() {
    delete []this->tara;
}

Capitala::Capitala(Capitala& cap) {
    this->tara = NULL;
    *this = cap;
}

