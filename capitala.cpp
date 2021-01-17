#include "capitala.h++"

Capitala::Capitala() {
    tara = NULL;
}

Capitala::Capitala(char *tara) {
    this->tara = new char [strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala() {
    delete []tara;
}