#include "localitate.hpp"

Localitate::Localitate()
{
    nume=NULL;
    nr_locuitori=0;
    venit_mediu=0;
}

Localitate::Localitate(char n[],int nr, int venit)
{
    nume=new char[strlen(n)+1];
    strcpy(nume,n);
    nr_locuitori=nr;
    venit_mediu=venit;
}

int Localitate::getNr() const
{
    return nr_locuitori;
}

int Localitate::getVenit() const
{
    return venit_mediu;
}

char* Localitate::getNume() const
{
    return nume;
}

ostream& operator<<(ostream& out, Localitate &m)
{
    out<<"Nume: "<<m.getNume()<<endl;
    out<<"Nr Locuitori: "<<m.getNr()<<endl;
    out<<"Venit Mediu: "<<m.getVenit()<<endl;
    return out;
}

void Localitate::afisare()
{
    cout<<"Nume: "<<getNume()<<endl;
    cout<<"Nr Locuitori: "<<getNr()<<endl;
    cout<<"Venit Mediu: "<<getVenit()<<endl;
}

Localitate::Localitate(Localitate& l)
{
    setNume(l.getNume());
    nr_locuitori=l.getNr();
    venit_mediu=l.getVenit();
}

void Localitate::setNume(char *name)
{
    if (nume)
        delete [](nume);
    nume=new char[strlen(name)+1];
    strcpy(nume,name);
}

void Localitate::setNrLoc(int nr)
{
    nr_locuitori=nr;
}

void Localitate::setVenit(int v)
{
    venit_mediu=v;
}

Localitate & Localitate::operator=(const Localitate &obj)
{
    setNume(obj.getNume());
    nr_locuitori=obj.getNr();
    venit_mediu=obj.getVenit();
    return *this;
}

Localitate::~Localitate()
{
    delete []nume;
}
