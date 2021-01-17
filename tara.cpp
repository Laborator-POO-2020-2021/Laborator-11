#include "tara.hpp"

Tara::Tara()
{
    v = nullptr;
}

Tara::Tara (Localitate **localitate)
{
    Localitate *aux;
    int i;
    for (i = 0, aux = localitate[0]; aux != nullptr; i ++, aux = localitate[i])
    {}

    this->v = new Localitate *[i];
    for (i = 0, aux = localitate[0]; aux != nullptr; i ++, aux = localitate[i])
    {
        this->v[i] = localitate[i];
    }
    this->v[i] = localitate[i];
}

Tara::Tara(Tara& obj)
{
    v = nullptr;
}

Tara& Tara::operator = (Tara& obj)
{
    if (this->v != nullptr)
    {
        for (int i = 0; this->v[i] != nullptr; i++)
        {
            delete this->v[i];
        }
       delete[] this->v;
    }
    Localitate *aux;
    int i;
    for (i = 0, aux = obj.v[0]; aux != nullptr; i ++, aux = obj.v[i])
    {}

    v = new Localitate* [i];
    for (i = 0, aux = obj.v[0]; aux != nullptr; i ++, aux = obj.v[i])
    {
        this -> v[i] = obj.v[i];
    }
    this->v[i] = obj.v[i];

    return *this;
}

ostream& operator << (ostream& out, Tara& obj)
{
    Localitate *a;
    int i;
    for (i = 0, a = obj.v[0]; a != nullptr; i ++, a = obj.v[i])
    {
        obj.v[i] -> afisare();
    }

    return out;
}

int Tara::getLocuitori()
{
    int nr_loc = 0;
    Localitate *aux;
    int i;
    for (i = 0, aux = v[0]; aux != nullptr; i++, aux = v[i])
    {
        nr_loc += v[i] -> getLocuitori();
    }
    return nr_loc;
}

int Tara::getVenit()
{
    int venit_total = 0;
    Localitate *aux;
    int i;
    for (i = 0, aux = v[0]; aux != nullptr; i++, aux = v[i])
    {
        venit_total += v[i] -> getVenit();
    }
    return venit_total;
}

Tara::~Tara()
{
    delete []v;
}
