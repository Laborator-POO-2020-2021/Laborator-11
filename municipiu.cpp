#include "municipiu.hpp"

Municipiu::Municipiu():Oras(),Localitate(){
    regiune = NULL;
}

Municipiu::Municipiu(const char*n,int nr, int v, int b, const char*r):Oras(n,nr,v,b),Localitate(n,nr,v){
    regiune = new char[strlen(r)+1];
    strcpy(regiune,r);
}

Municipiu::Municipiu(const Municipiu& obj){
    regiune = NULL;
    *this = obj;
}

Municipiu& Municipiu::operator=(const Municipiu& obj){
    Oras::operator=(obj);
    if(regiune!=NULL)delete[]regiune;
    regiune = new char[strlen(obj.regiune)+1];
    strcpy(regiune,obj.regiune);
    return *this;
}

void Municipiu::afisare(){
    Oras::afisare();
    cout<<"Regiune: "<<regiune<<endl;
}

Municipiu::~Municipiu(){
    delete[]regiune;
}

