#include "capitala.hpp"

Capitala::Capitala():Localitate(),Oras(){
    tara = NULL;
}

Capitala::Capitala(const char*n, int nr, int v, int b, const char*t):Localitate(n,nr,v),Oras(n,nr,v,b){
    tara = new char[strlen(t)+1];
    strcpy(tara,t);
}

Capitala::Capitala(const Capitala& obj){
    tara = NULL;
    *this = obj;
}

Capitala& Capitala::operator=(const Capitala& obj){
    Oras::operator=(obj);
    if(tara != NULL) delete[]tara;
    tara = new char[strlen(obj.tara)+1];
    strcpy(tara,obj.tara);
    return *this;
}

void Capitala::afisare(){
    Oras::afisare();
    cout<<"Tara: "<<tara<<endl;
}

Capitala::~Capitala(){
    delete[]tara;
}
