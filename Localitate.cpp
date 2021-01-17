#include "Localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0) {}

Localitate::Localitate(char *nume, int nrLocuitori, int venitMediu) : nume(nume), nr_locuitori(nrLocuitori),venit_mediu(venitMediu) {}

Localitate& Localitate::operator=(Localitate &obj){
    if(this->nume!=NULL)
    {
        delete []nume;
    }
    this->nume=new char[strlen(obj.nume)+1];
    strcpy(this->nume,obj.nume);

    this->nr_locuitori=obj.nr_locuitori;
    this->venit_mediu=obj.venit_mediu;

    return *this;
}


void Localitate::afisare(){
    cout<<"Nume localitate: "<<this->nume<<endl;
    cout<<"Nr locuitori: "<<this->nr_locuitori<<endl;
    cout<<"Venit mediu: "<<this->venit_mediu<<endl;

}

int Localitate::getNrLocuitori() const {
    return nr_locuitori;
}

int Localitate::getVenitMediu() const {
    return venit_mediu;
}

