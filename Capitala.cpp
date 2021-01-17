#include "Capitala.hpp"

Capitala::Capitala() : Oras(), tara(NULL) {}

Capitala::Capitala(const char* tara, int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu) : Oras(bonus_venit, nume, nr_locuitori, venit_mediu) {
    if(this->tara != NULL){
        delete[]this->tara;
    }
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala() {
    delete[]this->tara;
}

char* Capitala::getTara() {
    return this->tara;
}

void Capitala::Write() {
    cout << "-----Capitala-----" << endl;
    cout << "Nume: " << Localitate::getNume() << endl;
    cout << "Tara: " << this->tara << endl;
    cout << "Numar Locuitori: " << Localitate::getLocuitori() << endl;
    cout << "Venit Mediu: " << Oras::getVenitFinal() << endl;
    cout << "Bonusul din Venit Mediu: " << Oras::getBonusVenit() << endl;
}