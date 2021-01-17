#include "Localitate.hpp"

Localitate::Localitate() : nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu) {
    if(this->nume != NULL) {
        delete[]this->nume;
    }
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::~Localitate() {
    delete[]this->nume;
}

int Localitate::getLocuitori() {
    return this->nr_locuitori;
}

int Localitate::getVenit() {
    return this->venit_mediu;
}

char* Localitate::getNume() {
    return this->nume;
}

void Localitate::Write() {
    cout << "-----Localitate-----" << endl;
    cout << "Nume: " << nume << endl;
    cout << "Numar Locuitori: " << nr_locuitori << endl;
    cout << "Venit Mediu: " << venit_mediu << endl;

}