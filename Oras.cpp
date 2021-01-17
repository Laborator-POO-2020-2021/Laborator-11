#include "Oras.h"

Oras :: Oras() : Localitate(){
    bonus_venit = 0;
}

Oras :: Oras(const char* _nume, int _nr_locuitori, int _venit_mediu, int _bonus_venit) : Localitate(_nume, _nr_locuitori, _venit_mediu), bonus_venit(_bonus_venit){

}

Oras& Oras :: operator = (const Oras& oras){
    (Localitate)*this = Localitate::operator=(oras);
    bonus_venit = oras.bonus_venit;
    return *this;
}

int Oras :: getVenit(){
    return bonus_venit + Localitate::getVenit();
}

int Oras :: getLocuitori(){
    return Localitate::getLocuitori();
}

void Oras :: afisare(){
    cout << "\nOras:\n";
    Localitate::afisare();
    cout << "bonus venit: " << bonus_venit << endl;
}

Oras :: ~Oras(){

}