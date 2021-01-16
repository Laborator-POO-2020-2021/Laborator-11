#include "tara.hpp"

Tara::Tara (): v (NULL) {}

Tara::Tara (Localitate **loc)
{
    Localitate *p;
    int i;
    for (i = 0, p = loc[0]; p != NULL; i++, p = loc[i])
    {}
    v = new Localitate* [i];
    for (i = 0, p = loc[0]; p != NULL; i++, p = loc[i])
    {
        v[i] = loc[i];
    }
}

Tara::Tara (Tara &obj)
{
    v = NULL;
    
}

Tara& Tara::operator = (Tara &obj)
{
    Localitate *p;
    int i;
    if (this->v != NULL)
        delete[]v;
    for (i = 0, p = obj.v[0]; p != NULL; i++, p = obj.v[i])
    {}
    
    v = new Localitate* [i];
    for (i = 0, p = obj.v[0]; p != NULL; i++, p = obj.v[i])
    {
        this->v[i] = obj.v[i];
    }

    return *this;
}

ostream& operator << (ostream &out, Tara &obj)
{
    out << "Localitatile sunt: " << endl;
    Localitate *p;
    int i;
    for (i = 0, p = obj.v[0]; p != NULL; i++, p = obj.v[i])
    {
        obj.v[i]->print();
    }

    return out;
}

double Tara::Get_Population ()
{
    double populatie = 0;
    Localitate *p;
    int i;
    for (i = 0, p = v[0]; p != NULL; i++, p = v[i])
    {
        populatie = populatie + v[i]->Get_Population();
    }

    return populatie;
}

double Tara::Get_Venit ()
{
    double venit = 0;
    Localitate *p;
    int i;
    for (i = 0, p = v[0]; p != NULL; i++, p = v[i])
    {
        venit = venit + v[i]->Get_Venit ();
    }

    return venit;
}

Tara::~Tara ()
{
    delete []v;
}

