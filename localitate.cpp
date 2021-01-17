#include "localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0)
{

}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori),venit_mediu(venit_mediu)
{
    this->nume=new char(strlen(nume)+1);
    strcpy(this->nume,nume);
}

Localitate::Localitate(const Localitate&obj)
{
    nume=NULL;
    *this=obj;
}

Localitate& Localitate::operator=(const Localitate& obj)
{
    if(this->nume!=NULL)
        delete []this->nume;
    this->nume= new char[strlen(obj.nume)+1];
    strcpy(this->nume,obj.nume);

    this->nr_locuitori=obj.nr_locuitori;
    this->venit_mediu=obj.venit_mediu;
}


void Localitate::afisare()
{
    cout<<"Localiatatea cu numele de: "<<this->nume<<" are "<<this->nr_locuitori<<" de locuitori, cu venitul mediu de  "<<this->venit_mediu<<endl;
}

const char* Localitate::getnume() const
{
    return this->nume;
}

int Localitate::getloc() const
{
    return this->nr_locuitori;
}

int Localitate::getvenitm() const
{
    return this->venit_mediu;
}

int Localitate::getvenit()
{
    return (this->venit_mediu)*(this->nr_locuitori);
}

void Localitate::setvenitm(int venit)
{
    this->venit_mediu=venit;
}

Localitate::~Localitate()
{
    delete []nume;
}
