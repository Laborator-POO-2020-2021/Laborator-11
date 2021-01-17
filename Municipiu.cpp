#include "Municipiu.hpp"

Municipiu::Municipiu() : Oras(), regiune(0){}

Municipiu::Municipiu(const char* nume,const int nr_locuitori,const int venit_mediu,const int bonus_venit, const char* regiune) : Oras(nume, nr_locuitori,venit_mediu,bonus_venit)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::Municipiu(const Municipiu& obj): Oras(obj)
{
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
    Oras::operator=(obj);
    if(regiune != NULL)
        delete[] regiune;
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);

    return *this;
}

Municipiu::~Municipiu()
{
    delete[] regiune;
}


ostream& operator<<(ostream &out, const Municipiu& obj)
{
    out<<(Oras&)obj;
    out<<"Regiunea este: ";
    out<<obj.regiune<<endl;

    return out;
}

/*void Municipiu::afisare()
{
    Oras::afisare();
    cout<<"Regiunea este: ";
    cout<<regiune<<endl;
}*/

int Municipiu::getVenit()
{
    return Oras::getVenit();
}

int Municipiu::getLocuitori()
{
    return Localitate::getLocuitori();
}
