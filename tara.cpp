//Barbuc Andreea 324AB
#include "tara.hpp"

Tara::Tara():v(NULL)
{
}

Tara::Tara(Localitate **v):v(v)
{

}

void Tara::afisare()
{
    int i = 0;
    while (v[i] != NULL)
    {
        v[i]->afisare();
        i++;
    }
    
    cout<< "Numarul de locuitori din tara: "<< this->NrLocuitori()<< endl;
    cout<< "Venitul mediu al tarii: "<< this->VenitMediu()<< endl<< endl;
}

int Tara::VenitMediu()
{
    int suma = 0;
    int i = 0;
    while (v[i] != NULL)
    {
        suma = suma + v[i]->Venit_mediu();
        i++;
    }
    int media = suma / i;
    return media;
}

int Tara::NrLocuitori()
{
    int suma = 0;
    int i = 0;
    while (v[i] != NULL)
    {
        suma = suma + v[i]->Nr_locuitori();
        i++;
    }
    return suma;
}

Tara::~Tara()
{
	delete []v;
}

