#include "Tara.hpp"

Tara::Tara()
{

}

Tara::Tara(Localitate **v)
{
    this->v = v;
}

Tara::~Tara()
{
    if(this->v != NULL)
    {
        delete []this->v;
    }
}

int Tara::getLocuitori()
{
    int nr_locuitori = 0;
    for (int i=0; v[i]!=NULL; i++)
    {
        nr_locuitori = v[i]->getLoc() + nr_locuitori;
    }
    return nr_locuitori;
}

int Tara::getVenit()
{
    int venit = 0;
    for (int i=0; v[i]!=NULL; i++)
    {
        venit = v[i]->getVenit() + venit;
    }
    return venit;
}

void Tara::afisare()
{
    int i = 0;
    while (v[i] != NULL)
    {
        cout << "Numele localitatii: " << v[i]->getNume() << endl;
        cout << "Nr. de locuitori: " << v[i]->getLoc() << endl;
        cout << "Venitul mediu: " << v[i]->getVenit() << endl;
        i++;
    }
    cout << endl << endl;
    /*for (int i=0; v[i]!=NULL; i++)
    {
        venit = v[i]->getVenit() + venit;
    }
    return venit;*/
}

Tara& Tara::operator=(const Tara &obj)
{
    this->v = obj.v;

    return *this;
}
