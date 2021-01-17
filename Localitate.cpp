#include "Localitate.h"

Localitate :: Localitate(){
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}

Localitate :: Localitate(const char* _nume, int _nr_locuitori, int _venit_mediu){
    nume = new char[strlen(_nume) + 1];
    strcpy(nume, _nume);
    nr_locuitori = _nr_locuitori;
    venit_mediu = _venit_mediu;
}

Localitate& Localitate :: operator = (const Localitate& loc){
    if(nume != NULL){
        delete []nume;
    }
    nume = new char[strlen(loc.nume) + 1];
    strcpy(nume, loc.nume);
    nr_locuitori = loc.nr_locuitori;
    venit_mediu = loc.venit_mediu;
    return *this;
}

int Localitate :: getVenit(){
    return venit_mediu;
}

int Localitate :: getLocuitori(){
    return nr_locuitori;
}

void Localitate :: afisare(){
    cout << "\nLocalitatea: " << nume << "\nnr locuitori: " << nr_locuitori << "\nvenit mediu: " << venit_mediu << endl;
}
Localitate :: ~Localitate(){
    delete []nume;
}