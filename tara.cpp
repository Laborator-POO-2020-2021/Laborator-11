#include "tara.hpp"

Tara::Tara()
{

    v = NULL;
}

Tara::Tara(Localitate **local)
{
    //this->v = vec;

    Localitate *temp = local[0];
    int i;
    for (i = 0; temp != NULL; i++, temp = local[i])
    {
    }

    v = new Localitate *[i+1];
    temp = local[0];
    for (int i = 0; temp != NULL; i++, temp = local[i])
    {
        v[i] = local[i];
    }
    v[i] = NULL;
}

Tara &Tara::operator=(Tara &obj)
{

    //v = obj.v;

    Localitate *temp;
    int i;
    if (this->v != NULL)
        delete[]v;
    for (i = 0, temp = obj.v[0]; temp != NULL; i++, temp = obj.v[i])
    {}
    
    v = new Localitate* [i+1];
    for (i = 0, temp = obj.v[0]; temp != NULL; i++,temp = obj.v[i])
    {
        this->v[i] = obj.v[i];
    }
    v[i] = NULL;

    return *this;
}

Tara::~Tara()
{

    delete[] v;
}

ostream &operator<<(ostream &out, Tara &obj)
{
    int count = 0;
    while (obj.v[count] != NULL)
        count++;

    out << "Localitatile:" << endl;
    for (int i = 0; i < count; i++)
    {
        out << (*(obj.v[i]));
        out << endl;
    }
    return out;
}

int Tara::getVenit_mediu()
{

     int sum = 0, i = 0;
    while (v[i] != NULL)
    {
        sum += v[i]->getVenit_mediu();
        i++;
    }
    return sum;
}

int Tara::getLocuitori()
{

    int loc = 0, i = 0;
    while (v[i] != NULL)
    {
        loc += v[i]->getLocuitori();
        i++;
    }
    return loc;
}