#include "Tara.hpp"

Tara::Tara() : v(NULL){}

Tara::Tara(Localitate **v)
{
    int dim = 0;
    while (v[dim] != NULL)
    {
        dim++;
    }
    this->v = new Localitate*[dim+1];
    int i;
    for (i = 0; i < dim; i++)
    {
        this->v[i] = v[i];
    }
    this->v[dim] = NULL;
}
Tara::Tara(const Tara &obj)
{
    v = NULL;
    *this = obj;
}
Tara &Tara::operator=(const Tara &obj)
{
    if (this->v != NULL)
        delete[] this->v;
    int dim = 0;
    while (obj.v[dim] != NULL)
    {
        dim++;
    }
    this->v = new Localitate*[dim+1];
    int i;
    for (i = 0; i < dim; i++)
    {
        this->v[i] = obj.v[i];
    }
    this->v[dim] = NULL;
    return *this;
}
void Tara::afisare()
{
    cout << "\nLocalitatile sunt:" << endl;
    for (int i = 0;  v[i] != NULL; i++)
        v[i]->afisare();
    cout << endl;
}
float Tara::getVenit()
{
    int venit = 0, i;
    for (i = 0;  v[i] != NULL; i++)
    {
        venit += v[i]->getVenit();
    }
	return (float)venit/i;
}
int Tara::getNrLocuitori()
{
    int nr_loc = 0;
    for (int i = 0;  v[i] != NULL; i++)
    {
        nr_loc += v[i]->getNrLocuitori();
    }
    return nr_loc;
}
Tara::~Tara()
{
    if(v != NULL)
        delete[] v;
}