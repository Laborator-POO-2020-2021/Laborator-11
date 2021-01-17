#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL) {}

Municipiu::Municipiu(char *nume, int nrLocuitori, int venitMediu, int bonusVenit, char *regiune) : Oras(nume,nrLocuitori,venitMediu,bonusVenit),regiune(regiune) {}

Municipiu& Municipiu::operator=(Municipiu &obj)
{
    Oras::operator=(obj);
    if(this->regiune!=NULL)
    {
        delete []regiune;
    }
    this->regiune=new char[strlen(obj.regiune)+1];
    strcpy(this->regiune,obj.regiune);

    return  *this;
}

void Municipiu::afisare() {
    Oras::afisare();
    cout<<"Regiune: "<<this->regiune<<endl;

}