#include "Tara.hpp"

Tara::Tara():v(NULL)
{

}

Tara::Tara(Localitate** v)
{
    this->v = v;
}

Tara::~Tara()
{
    delete []v;
}

void Tara::afisare()
{
    Localitate** aux = v;

    while( *aux != NULL)
    {
        (*aux)->afisare();
        cout << endl;
        aux++;
    }
}

int Tara::getPopulatie()
{
    int aux = 0;

    Localitate **temp = v;

    while(*temp != NULL)
    {
        aux += (*temp)->getLocuitori();
        temp++;
    }

    return aux;
}

int Tara::getVenit()
{
    Localitate** aux = v;
    int s = 0, nr = 0;
    while (*aux != NULL)
    {
        s += (*aux)->getVenit();
        aux++;
    }
    return s;

}

