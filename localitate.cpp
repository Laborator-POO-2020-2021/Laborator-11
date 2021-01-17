#include "localitate.h++"

Localitate::Localitate() {
    this->nume = NULL;
    this->nr_locuitori = 0;
    this->venit_mediu = 0;
}

Localitate::Localitate(char *nume, int nr_locuitori, int venit_mediu) {
    this->nume = new char [strlen(nume) + 1 ];
    strcpy(this->nume, nume);

    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::~Localitate() {
    delete []nume;
}


