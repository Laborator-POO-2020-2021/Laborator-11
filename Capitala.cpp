#include "Capitala.hpp"

Capitala::Capitala()
{
    tara = NULL;
}

Capitala::Capitala(char *tara)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara,tara);

}


void Capitala::afisare()
{

    cout << "tara: "<< tara << endl;

}

