
#include "Municipiu.hpp"

Municipiu:: Municipiu(): Oras()
{
    this->regiune=NULL;
}

Municipiu::Municipiu(const char* nume, const char* regiune, int nr, int venit, int bonus): Oras(nume, nr, venit, bonus)
{
    this->regiune=new char[strlen(regiune)+1];
    strcpy(this->regiune, regiune);
}

void Municipiu:: afisare()
{
    Oras:: afisare();
    cout<<"Regiune: "<<this->regiune;
    cout<<endl;
}

Municipiu:: ~Municipiu()
{
    delete[] this->regiune;
}

