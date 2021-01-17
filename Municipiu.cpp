#include "Municipiu.hpp"

Municipiu::Municipiu() : Oras(), regiune(NULL) {}

Municipiu::Municipiu(const char *regiune, int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu) : Oras(bonus_venit, nume, nr_locuitori, venit_mediu) {
    if(this->regiune != NULL){
        delete[]this->regiune;
    }
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu() {
    delete[] this->regiune;
}

char* Municipiu::getRegiune() {
    return this->regiune;
}

void Municipiu::Write() {
    cout << "-----Municipiu-----" << endl;
    cout << "Nume: " << Localitate::getNume() << endl;
    cout << "Regiune: " << this->regiune << endl;
    cout << "Numar Locuitori: " << Localitate::getLocuitori() << endl;
    cout << "Venit Mediu: " << Oras::getVenitFinal() << endl;
    cout << "Bonusul din Venit Mediu: " << Oras::getBonusVenit() << endl;
}