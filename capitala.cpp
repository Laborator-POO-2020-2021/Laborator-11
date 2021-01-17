#include "capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL)
{

}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu,int bonus_venit,const char* tara):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
    this->tara=new char(strlen(tara)+1);
    strcpy(this->tara,tara);
}

Capitala::~Capitala()
{
    delete []tara;
}

char* Capitala::gettara()
{
    return this->tara;
}

void Capitala::settara(const char*tara)
{
    if(this->tara!=NULL)
        delete []this->tara;
    this->tara=new char[strlen(tara)+1];
    strcpy(this->tara,tara);
}

void Capitala::afisare()
{
    cout<<"Localiatatea cu numele de: "<<this->getnume()<<" are "<<this->getloc()<<" de locuitori, cu venitul mediu de  "<<this->getvenitm()<<"  ";
    cout<<"Bonus: "<<this->getbonus()<<"  ";
    cout<<"Tara: "<<this->tara<<endl;
}
