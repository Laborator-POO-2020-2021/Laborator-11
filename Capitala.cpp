
#include "Capitala.hpp"

Capitala::Capitala()
{
    this->tara=NULL;
}

Capitala:: Capitala(const char* nume, const char* tara, int nr, int venit, int bonus): Oras(nume, nr, venit, bonus)
{
    this->tara=new char[strlen(tara)+1];
    strcpy(this->tara, tara);
}

void Capitala :: afisare()
{
    Oras:: afisare();
    cout<<"Tara: "<<this->tara;
    cout<<endl;
}

Capitala:: ~Capitala()
{
    delete[] this->tara;
}
