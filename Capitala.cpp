#include "Capitala.hpp"

Capitala::Capitala() : Oras(), tara(NULL){
}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* tara) : Oras(nume, nr_locuitori,venit_mediu,bonus_venit)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::Capitala(const Capitala& obj) : Oras(obj)
{
    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, obj.tara);
}

Capitala& Capitala::operator=(const Capitala& obj)
{
    Oras::operator=(obj);
    if(tara != NULL)
        delete[] tara;
    this->tara = new char[strlen(obj.tara) + 1];
    strcpy(this->tara, obj.tara);

    return *this;
}

Capitala::~Capitala()
{
    delete[] tara;
}

ostream& operator<<(ostream& out, const Capitala&obj)
{
    out<<(Oras&)obj;
    out<<"Tara este: ";
    out<<obj.tara<<endl;

    return out;
}

/*void Capitala::afisare()
{
    Oras::afisare();
    cout<<"Tara este: ";
    cout<<tara<<endl;
}*/

int Capitala::getVenit()
{
    return Oras::getVenit();
}

int Capitala::getLocuitori()
{
    return Localitate::getLocuitori();
}