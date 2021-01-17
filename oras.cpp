#include "oras.hpp"

Oras::Oras():Localitate(){
    bonus_venit = 0;
}

Oras::Oras(const char*n,int nr, int v, int b):Localitate(n,nr,v){
    bonus_venit = b;
}

Oras::Oras(const Oras& obj){
    *this = obj;
}

Oras& Oras::operator=(const Oras& obj){
    Localitate::operator=(obj);
    bonus_venit = obj.bonus_venit;
    return *this;
}

void Oras::afisare(){
    Localitate::afisare();
    cout<<"Bonus de venit:"<<bonus_venit<<endl;
}

