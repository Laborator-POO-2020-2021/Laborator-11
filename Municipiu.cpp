#include "Municipiu.hpp"

Municipiu::Municipiu(): Oras(), regiune(NULL) {}

Municipiu::Municipiu(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, char *regiune):
           Oras(nume, nr_locuitori, venit_mediu, bonus_venit) {
        this->regiune = new char[strlen(regiune) + 1];
        strcpy(this->regiune, regiune);
    }

/* int Municipiu::getVenitMediu() {
    return Oras::getVenitMediu();
} */

void Municipiu::afisare() {
    Oras::afisare();
    cout << regiune << ";";
}

Municipiu::~Municipiu() {
    if (nume != NULL)
        delete[]nume;
    if (regiune != NULL)
        delete[]regiune;
}