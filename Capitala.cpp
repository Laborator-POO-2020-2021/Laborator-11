#include "Capitala.hpp"


Capitala::Capitala():Oras(), tara(NULL)
{

}

Capitala::Capitala(char* nume, int loc, int venit, int bonus, char* tara):Oras(nume, loc , venit ,bonus)
{
    this->tara = new char[strlen(tara)+1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala()
{
    delete []this->tara;
}
