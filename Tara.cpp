
#include "Tara.hpp"
#include <iostream>
Tara:: Tara()
{
    this->v=NULL;
}

Tara:: Tara(Localitate **arr): v(arr)
{

}

void Tara:: afisare()
{
    int i=0;
    while (v[i] != NULL)
    {
        v[i]->afisare();
        i++;
    }
    cout<<"Nr de locuitori ai tarii: "<<this->getNrLocuitori()<<endl;
    cout<<"Venit mediu al tarii: "<<this->getVenitMediu()<<endl;
}

int Tara :: getVenitMediu()
{
    int sum=0;
    int i=0;
    while (v[i] !=NULL)
    {
        sum=sum+v[i]->getVenit();
        i++;
    }
    return sum/i;
}

int Tara:: getNrLocuitori()
{
    int sum=0;
    int i=0;
    while (v[i] !=NULL)
    {
        sum=sum+v[i]->getNr_locuitori();
        i++;
    }
    return sum;
}

Tara:: ~Tara()
{
    delete[] this->v;
}
