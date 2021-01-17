#include "tara.hpp"

Tara::Tara() : v(NULL){}

Tara::Tara(Localitate **v)
{
	this->v = v;
}

Tara::Tara(const Tara &obj)
{
    v = NULL;
    *this = obj;
}

Tara& Tara::operator =(const Tara &obj)
{
	v = obj.v;

	return *this;
}

Tara::~Tara()
{
    delete[] v;
}

int Tara::getNr_locuitori() const
{
    int Nr_locuitori = 0;
    for(int i = 0; v[i] != NULL; i++)
    {
        Nr_locuitori += v[i]->getNr_locuitori();
    }

    return Nr_locuitori;
}

int Tara::getVenit_mediu() const
{
    int Venit_mediu = 0;
    for(int i = 0; v[i] != NULL; i++)
    {
        Venit_mediu += v[i]->getVenit_mediu();
    }

    return Venit_mediu;
}

void Tara::afisare()
{
    for(int i = 0; v[i] != NULL; i++)
    {
        cout << "Localitatea " << i + 1 << endl;
        v[i]->afisare();
        cout << endl;
    }
}

