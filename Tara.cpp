#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

Tara::Tara() : v(NULL) {}

Tara::Tara(Localitate** obj) {
    this->v = obj;
}

Tara::~Tara() {
    delete[]v;
}

int Tara::getNrLocuitori() {
    int nr_loc = 0;
    for (int i = 0; v[i] != NULL; i++)
        nr_loc += v[i]->getLocuitori();

    return nr_loc;
}

int Tara::getVenit() {
    int venit = 0;
    for (int i = 0; v[i] != NULL; i++)
        venit += v[i]->getVenit();

    return venit;
}

void Tara::Write() {
    int index = 0;
    while (v[index] != NULL) {
        v[index]->Write();
        index++;
        cout << endl;
    }
    cout << endl << endl;
}