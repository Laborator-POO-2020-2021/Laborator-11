#include "Municipiu.hpp"

Municipiu::Municipiu()
{
    regiune = NULL;
}

Municipiu::Municipiu(char *regiune)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune,regiune);
}


void Municipiu::afisare()
{

    cout << "regiune municipiu: ";

    cout<< regiune << endl;


}


