#include "Tara.h"



Tara::Tara()
{
    v = NULL;
}

Tara::Tara(Localitate** vect)
{
    int index = 0;
    while (vect[index] != NULL)
    {
        ++index;
    }
    delete[] v;
    ++index;
    v = new Localitate * [++index];
    for (int i = 0; i < index; ++i)
        v[i] = vect[i];

    this->v[--index] = NULL;
}

Tara::~Tara()
{
    delete[] v;
}

int Tara::get_nr_locuitori() const
{
    int index = 0, s = 0;
    while (v[index] != NULL)
    {
        s += v[index]->get_nr_locuitori();
        ++index;
    }

    return s;
}

int Tara::get_venit_mediu() const
{
    int index = 0, s = 0;
    while (v[index] != NULL)
    {
        s += v[index]->get_venit_mediu();
        ++index;
    }

    return s;
}

Tara& Tara::operator=(const Tara& obj)
{
    int index = 0;
    while (obj.v[index] != NULL)
        ++index;
    delete[] this->v;
    ++index;
    this->v = new Localitate * [++index];
    for (int i = 0; i < index; ++i)
        this->v[i] = obj.v[i];

    this->v[--index] = NULL;
    return *this;
}

ostream& operator<<(ostream& out, Tara& vect)
{
    int index = 0;
    while (vect.v[index] != NULL)
        ++index;

    out << "Localitati: " << endl;
    for (int i = 0; i < index; ++i)
        (*vect.v[i]).afisare(out);
    out << endl;
    return out;
}