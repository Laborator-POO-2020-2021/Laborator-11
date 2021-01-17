#include "Capitala.h"

Capitala :: Capitala() : Oras(), tara(NULL){
    
}

Capitala :: Capitala(const char* _nume, int _nr_locuitori, int _venit_mediu, int _bonus_venit, const char* _tara) : Oras(_nume, _nr_locuitori, _venit_mediu, _bonus_venit){
    tara = new char[strlen(_tara) + 1];
    strcpy(tara, _tara);
}

Capitala& Capitala :: operator = (const Capitala& cap){
    (Oras)*this = Oras::operator=(cap);
    if(tara != NULL){
        delete []tara;
    }
    tara = new char[strlen(cap.tara) + 1];
    strcpy(tara, cap.tara);
    return *this;
}

int Capitala :: getVenit(){
    return Oras::getVenit();
}

int Capitala :: getLocuitori(){
    return Oras::getLocuitori();
}

void Capitala :: afisare(){
    cout << "\nCapitala:\n";
    Oras::afisare();
    cout << "tara: " << tara << endl;
}

Capitala :: ~Capitala(){
    delete []tara;
}