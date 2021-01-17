#include "municipiu.hpp"

Municipiu::Municipiu():regiune(NULL)
{

}

Municipiu::Municipiu(const char* nume, int nr_locuitori, int venit_mediu,int bonus_venit,const char*regiune):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
    this->regiune=new char[strlen(regiune)+1];
    strcpy(this->regiune,regiune);
}

void Municipiu::afisare()
{
    cout<<"Localiatatea cu numele de: "<<this->getnume()<<" are "<<this->getloc()<<" de locuitori, cu venitul mediu de  "<<this->getvenitm()<<"   ";
    cout<<"Bonus: "<<this->getbonus()<<"  ";
    cout<<"Tara: "<<this->regiune<<endl;
}

Municipiu::~Municipiu()
{
    delete []regiune;
}

