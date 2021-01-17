#include "Tara.hpp"

Tara::Tara()
{
    v = NULL;
}

Tara::Tara(Tara &x)
{
    v = NULL;
}

Tara::Tara(Localitate **loc)
{
    Localitate *y;
    int i;
    for (i = 0, y = loc[0]; y != NULL; i++, y = loc[i])
    {

    }
    v = new Localitate* [i];
    for (i = 0, y = loc[0]; y != NULL; i++, y = loc[i])
    {
        v[i] = loc[i];
    }
}

Tara& Tara::operator= (Tara &x)
{
    Localitate *y;
    int i;
    if (this -> v != NULL)
        delete[]v;
    for (i = 0, y = x.v[0]; y != NULL; i++, y = x.v[i])
    {}

    v = new Localitate* [i];
    for (i = 0, y = x.v[0]; y != NULL; i++, y = x.v[i])
    {
        this->v[i] = x.v[i];
    }

    return *this;
}

ostream& operator<< (ostream &out, Tara &x)
{
    out << "Localitatile vor fi: " << '\n';
    Localitate *y;
    int i;
    for (i = 0, y = x.v[0]; y != NULL; i++, y = x.v[i])
    {
        x.v[i]->afisare();
    }

    return out;
}

double Tara::Populatie_T()
{
    double populatie = 0;
    Localitate *y;
    int i;
    for (i = 0, y = v[0]; y != NULL; i++, y = v[i])
    {
        populatie = populatie + v[i] -> Populatie();
    }

    return populatie;
}

double Tara::Venit_T()
{
    double venit = 0;
    Localitate *y;
    int i;
    for (i = 0,  y = v[0];  y != NULL; i++, y = v[i])
    {
        venit = venit + v[i] -> Venit();
    }

    return venit;
}

Tara::~Tara()
{
    delete []v;
}
