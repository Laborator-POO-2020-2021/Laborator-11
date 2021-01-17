#include "Municipiu.hpp"


Municipiu::Municipiu():Oras(), regiune(NULL)
{

}

Municipiu::Municipiu(char* nume, int loc, int venit, int bonus,char* regiune):Oras(nume, loc , venit ,bonus)
{
    this->regiune = new char[strlen(regiune)+1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu()
{
    delete []this->regiune;
}
