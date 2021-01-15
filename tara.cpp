#include "tara.hpp"

Tara::Tara()
{
    v = NULL;
}

Tara::Tara(Localitate **local)
{
    Localitate *temp = local[0];
    int i;
    for (i = 0; temp != NULL; i++, temp = local[i])
    { /* pentru a afla indicile ultimului element*/
    }

    v = new Localitate *[i];
    temp = local[0];
    for (int i = 0; temp != NULL; i++, temp = local[i])
    {
        v[i] = local[i];
    }
}

Tara &Tara::operator=(const Tara obj)
{
    Localitate *temp = obj.v[0];
    int counter;

    if (this->v != NULL)
        delete[] v;
    for (counter = 0; temp != NULL; counter++, temp = obj.v[counter])
    {
    }

    v = new Localitate *[counter];
    temp = obj.v[0];
    for (int i = 0; temp != NULL; i++, temp = obj.v[i])
        this->v[i] = obj.v[i];

    return *this;
}

Tara::~Tara()
{
    
    delete[] v;
}

ostream &operator<<(ostream &out, Tara &obj)
{
    Localitate *temp = obj.v[0];
    out << "Localitatile:" << endl;
    for (int i = 0; temp != NULL; i++, temp = obj.v[i])
    {
        out << (*(obj.v[i]));
        out << endl;
    }
    return out;
}

int Tara::getVenit_mediu() const
{
    Localitate *temp = v[0];
    int sum = 0;
    for (int i = 0; temp != NULL; i++, temp = v[i])
    {
        sum += v[i]->getVenit_mediu();
    }
    return sum;
}

int Tara::getLocuitori() const
{
    Localitate *temp = v[0];
    int sum = 0;
    for (int i = 0; temp != NULL; i++, temp = v[i])
    {
        sum += v[i]->getLocuitori();
    }
    return sum;
}