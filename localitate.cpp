#include "localitate.hpp"

Localitate::Localitate(){
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}

Localitate::Localitate(const char*n, int nr, int v){
    nume = new char[strlen(n)+1];
    strcpy(nume,n);
    nr_locuitori = nr;
    venit_mediu = v;
}

Localitate::Localitate(const Localitate& obj){
    nume = NULL;
    *this = obj;
}

Localitate& Localitate::operator=(const Localitate& obj){
    if(nume!=NULL)delete[]nume;
    nume = new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);
    nr_locuitori = obj.nr_locuitori;
    venit_mediu = obj.venit_mediu;
    return *this;
}

void Localitate::afisare(){
    cout<<"Numele localitatii: "<<nume<<endl<<"Nr. de locuitori "<<nr_locuitori<<endl<<"Venitul mediu:"<<venit_mediu<<endl;
}

int Localitate::getLocuitori(){
    return nr_locuitori;
}

int Localitate::getVenit_mediu(){
    return venit_mediu;
}

Localitate::~Localitate(){
   delete[]nume;
}
