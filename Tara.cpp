#include "Tara.hpp"

Tara::Tara() {};

Tara::Tara(Localitate **v) {
    this->v = v;
}

Tara &Tara::operator=(const Tara &obj) {
    this->v = obj.v;
}

int Tara::get_nr_locuitori() {
    int locuitori = 0;
    for (int i = 0; v[i] != NULL; i++)
        locuitori = locuitori + v[i]->get_nr_locuitori();
    return locuitori;
}

int Tara::get_venit_mediu() {
    int venit = 0;
    for (int i = 0; v[i] != NULL; i++)
        venit = venit + v[i]->get_venit_mediu();

    return venit;
}

void Tara::afisare() {
    int i = 0;
    cout << "Tara: " << endl;
    while (v[i] != NULL) {
        cout << "Localitate: " << v[i]->get_nume() << endl;
        cout << "Nr_locuitori: " << v[i]->get_nr_locuitori() << endl;
        cout << "Venit_mediu: " << v[i]->get_venit_mediu() << endl;
        i++;
    }
    cout << endl << endl;
}

Tara::~Tara() {
    if (this->v != NULL) {
        delete[]this->v;
    }
}


