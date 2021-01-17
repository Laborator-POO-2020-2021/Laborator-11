#include "Municipiu.h"

Municipiu :: Municipiu() : Oras(), regiune(NULL){

}

Municipiu :: Municipiu(const char* _nume, int _nr_locuitori, int _venit_mediu, int _bonus_venit, const char* _regiune) : Oras(_nume, _nr_locuitori, _venit_mediu, _bonus_venit){
    regiune = new char[strlen(_regiune) + 1];
    strcpy(regiune, _regiune);
}

Municipiu& Municipiu :: operator = (const Municipiu& mun){
    (Oras)*this = Oras::operator=(mun);
    if(regiune != NULL){
        delete []regiune;
    }
    regiune = new char[strlen(mun.regiune) + 1];
    strcpy(regiune, mun.regiune);
    return *this;
}

int Municipiu :: getVenit(){
    return Oras::getVenit();
}

int Municipiu :: getLocuitori(){
    return Oras::getLocuitori();
}

void Municipiu :: afisare(){
    cout << "\nMunicipiu:\n";
    Oras::afisare();
    cout << "regiune: " << regiune << endl;
}

Municipiu :: ~Municipiu(){
    delete []regiune;
}