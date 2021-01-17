#include "tara.hpp"

Tara::Tara(int n)
{
    v=new Localitate*[n];
    for (int i=0;i<n;i++)
    {
        v[i]=NULL;
    }
    nr_localitati=n;
}

void Tara::addLoc(Localitate *l)
{
    for (int i=0;i<nr_localitati;i++)
        if (v[i]==NULL)
        {
            v[i]=l;
            break;
        }
}

void Tara::afisare()
{
    for (int i=0;i<nr_localitati;i++)
    {
        v[i]->afisare();
        cout<<endl;
    }
}

int Tara::getLocTot()
{
    int suma=0;
    for (int i=0;i<nr_localitati;i++)
        suma+=v[i]->getNr();
    return suma;
}

Tara & Tara::operator=(const Tara &obj)
{
    nr_localitati=obj.nr_localitati;
    if (v)
        delete []v;
    v=new Localitate*[nr_localitati];
    for (int i=0;i<nr_localitati;i++)
        v[i]=obj.v[i];
    return *this;
}

void schimba(Tara& a, Tara& b)
{
    Tara aux=a;
    a=b;
    b=aux;
}

Tara::Tara(const Tara& obj)
{
    nr_localitati=obj.nr_localitati;
    if (v)
    {
        delete []v;
    }
    v=new Localitate*[nr_localitati];
    for (int i=0;i<nr_localitati;i++)
        v[i]=obj.v[i];
}

double Tara::getBani()
{
    double suma=0;
    for (int i=0;i<nr_localitati;i++)
        suma+=v[i]->getVenit();
    suma=(double)suma/nr_localitati;
    return suma;
}

Tara::~Tara()
{
    delete []v;
}
