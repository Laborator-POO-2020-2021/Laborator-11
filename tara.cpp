#include "tara.hpp"

Tara::Tara():v(NULL) {}

Tara::Tara(Localitate **v) {
    this->v = v;
}

Tara::~Tara() {
    delete []v;
}

void Tara::afisare(){
    int i = 0;
    while(v[i] != NULL) {
        v[i]->afisare();
        cout<<endl;
        i++;
    }
}

int Tara::getNrlocuitori(){
    int i = 0;
    int suma = 0;
    while(v[i] != NULL) {
        suma  = suma + v[i]->getLoc();
        i++;
    }

    return suma;
}

float Tara::getVenitMediu(){
    int i = 0;
    int suma = 0;
    while(v[i] != NULL) {
        suma  = suma + v[i]->getVenit();
        i++;
    }

    float rez = float(suma)/i;
    return rez;
}