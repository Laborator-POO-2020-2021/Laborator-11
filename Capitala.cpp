#include "Capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL) {}

Capitala::Capitala(char *nume, int nrLocuitori, int venitMediu, int bonusVenit, char *tara) : Oras(nume, nrLocuitori,venitMediu,bonusVenit),tara(tara) {}

Capitala& Capitala::operator=(Capitala &obj) {
    Oras::operator=(obj);

    if(this->tara!=NULL)
    {
        delete []tara;
    }
    this->tara=new char[strlen(obj.tara)+1];
    strcpy(this->tara,obj.tara);

    return *this;
}

void Capitala::afisare() {
    Oras::afisare();
    cout<<"Tara: "<<this->tara<<endl;

}