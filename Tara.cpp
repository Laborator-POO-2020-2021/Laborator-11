#include "Tara.hpp"

Tara::Tara():V(NULL)
{}

Tara::Tara (Localitate** vec)
{
    V = vec;
}

Tara::~Tara()
{
    /*
    Localitate **i = V;
    while(*i)
    {
        delete *i;
        i++;
    }
    */
    delete []V;
}

void Tara::afisare()
{
    Localitate** i = V;
    while(*i)
    {
        //if (i == NULL) cout<<"pl";
        (*i)->afisare(); cout<<endl;
        i++;
    }
}

int Tara::getPop()
{
    int pop = 0;
    Localitate **i = V;
    while (*i)
    {
        pop += (*i)->getLoc();
        i++;
    }

    return pop;
}

float Tara::getVenitmediu()
{
    Localitate** i = V;
    int s = 0, nr = 0;
    while (*i)
    {
        nr++;
        s += (*i)->getVenit();
        i++;
    }
    return (float)s/nr;

}
