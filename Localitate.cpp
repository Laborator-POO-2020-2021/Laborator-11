#include "Localitate.hpp"

Localitate::Localitate() : nume(NULL), nr_locuitori(0), venit_mediu(0){
}

Localitate::Localitate(const char* nume,const int nr_locuitori,const int venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::Localitate(const Localitate& obj)
{
    nume = NULL;
    *this = obj;
}

Localitate& Localitate::operator=(const Localitate& obj)
{
    if(nume != NULL)
        delete[] nume;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;

    return *this;
}

Localitate::~Localitate()
{
    delete[] nume;
}

int Localitate::getLocuitori()
{
    return nr_locuitori;
}

ostream& operator<<(ostream& out, const Localitate& obj)
{
    out<<"Numele localitatii este: ";
    out<<obj.nume<<endl;
    out<<"Numarul de locuitori: ";
    out<<obj.nr_locuitori<<endl;
    out<<"Venitul mediu este: ";
    out<<obj.venit_mediu<<endl;

    return out;
}

/*void Localitate::afisare()
{
    cout<<"Numele localitatii este: ";
    cout<<nume<<endl;
    cout<<"Numarul de locuitori: ";
    cout<<nr_locuitori<<endl;
    cout<<"Venitul mediu este: ";
    cout<<venit_mediu<<endl;
}*/

int Localitate::getVenit()
{
    return venit_mediu;
}