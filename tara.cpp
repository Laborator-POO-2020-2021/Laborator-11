#include "tara.hpp"

Tara::Tara()
{
    v = NULL;
}

Tara::Tara(Localitate **vec)
{
    Localitate *p;
    int i;
    for (i = 0, p = vec[0]; p != NULL; i++, p = vec[i])
    {
    }
    v = new Localitate *[i];
    for (i = 0, p = vec[0]; p != NULL; i++, p = vec[i])
    {
        v[i] = vec[i];
    }
}

Tara& Tara::operator=(Tara &obj)
{
    Localitate *p;
    int i;
    if (this->v != NULL)
        delete[] v;
    for (i = 0, p = obj.v[0]; p != NULL; i++, p = obj.v[i])
    {
    }
    v = new Localitate *[i];
    for (i = 0, p = obj.v[0]; p != NULL; i++, p = obj.v[i])
    {
        this->v[i] = obj.v[i];
    }
    return *this;
}

int Tara::get_populatie()
{
    int populatie = 0;
    Localitate *p;
    int i;
    for (i = 0, p = v[0]; p != NULL; i++, p = v[i])
    {
        populatie = populatie + v[i]->get_populatie();
    }
    return populatie;
}

int Tara::get_venit()
{
    int venit = 0;
    Localitate *p;
    int i;
    for (i = 0, p = v[0]; p != NULL; i++, p = v[i])
    {
        venit = venit + v[i]->get_venit();
    }
    return venit;
}

ostream &operator<<(ostream &out, Tara &obj)
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

Tara::~Tara()
{
    delete[] v;
}