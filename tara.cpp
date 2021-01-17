
#include "tara.hpp"

Tara::Tara(): v(NULL) {}

Tara::Tara(Localitate ** v)
{
    this->v = v;
}

void Tara::afisare()
{
    int i = 0;
    while(v[i] != NULL)
    {
        v[i]->afisare();
        i++;
    }
}

int Tara::getNrLocTara()
{
    int nrLocTara = 0;
    for(int i = 0; this->v[i] != NULL; i++)
    {
        nrLocTara = nrLocTara + this->v[i]->getNrLoc();
    }
    return nrLocTara;
}

int Tara::getVenitMediu()
{
    int venitMediu = 0;
    for(int i = 0; this->v[i] != NULL; i++)
    {
        venitMediu = venitMediu + this->v[i]->getVenitMediu();
    }
    return venitMediu;
}

Tara::~Tara()
{
    delete []v;
}
