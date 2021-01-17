#include "Tara.hpp"

Tara::Tara(): v(NULL) {}

Tara::Tara(Localitate **v): v(v) {}

Tara& Tara::operator=(const Tara &obj) {
    this->v = obj.v;
    return *this;
}

int Tara::getLocuitori() {
    int locuitori = 0;
    int i = 0;
    while (v[i] != NULL) {
        locuitori += v[i]->getNrLocuitori();
        i++;
    }
    return locuitori;
}

double Tara::getVenit() {
    double venit_total = 0;
    int i = 0;
    while (v[i] != NULL) {
        venit_total += v[i]->getVenitMediu();
        i++;
    }
    return (double) venit_total / (double) i;
}

void Tara::afisare() {
    int i = 0;
    while (v[i] != NULL) {
        v[i]->afisare();
        cout << "\n";
        i++;
    }
}

Tara::~Tara() {
    if (v != NULL)
        delete[]v;
}