#include "tara.hpp"

Tara::Tara()
{
    v = new Localitate*[0];
    nr_loc = 0;
}

//Tara::Tara(Localitate **v)

Tara::Tara(const Tara &obj)
{
    this->v = obj.v;
    this->nr_loc = obj.nr_loc;
}

Tara& Tara::operator=(const Tara &obj)
{
    this->v = obj.v;
    this->nr_loc = obj.nr_loc;

    return *this;
}

void Tara::adauga(Localitate *obj)
{
    Localitate** buffer = new Localitate*[nr_loc+1];
    for(int i=0; i<this->nr_loc; i++)
        *(buffer+i) = *(v+i);

    *(buffer+nr_loc) = obj;
    delete []v;
    v = buffer;

    this->nr_loc = this->nr_loc + 1;
}

void Tara::afisare()
{
    for(int i=0; i<nr_loc; i++)
    {
        v[i]->afisare();
        cout << endl;
    }
}

int Tara::Get_venit()
{
    int s=0;
    for(int i=0; i<this->nr_loc; i++)
        s = s + v[i]->Get_venit();
    return s;
}

int Tara::Get_nr_locuitori()
{
    int s=0;
    for(int i=0; i<this->nr_loc; i++)
        s = s + v[i]->Get_nr_locuitori();
    return s;
}

Tara::~Tara()
{
 //   for(int i=0; i<nr_loc; i++)
 //       delete []v[i];
    delete []v;
}
/*
Tara::Tara()
{
    v = new Localitate*[1];
    v[0] = NULL;
}

Tara::Tara(Localitate **v)
{
    int i = 0;
    while(v[i]!=NULL)
    {
        this->v[i] = v[i];
        i++;
    }
}

Tara::Tara(const Tara& obj)
{
    *v = NULL;
    *this = obj;
}

Tara::~Tara()
{
    delete []v;
}

Tara& Tara::operator=(const Tara &obj)
{
    this->v = obj.v;
    return *this;
}

void Tara::put(Localitate *obj)
{
    int i = 0;
    int k = 0;
    while(v[i] != NULL)
    {
        k++;
        i++;
    }

    Localitate **buffer;
    buffer=new Localitate*[k+2];
    if(k>0)
    for(i=0;i<k;i++)
        *(buffer+i) = *(v+i);

    *(buffer+k) = obj;
    *(buffer+k+1) = NULL;
    delete []v;
    v = buffer;
}

void Tara::afisare()
{
    int i = 0;
    while(v[i] != NULL)
{
    v[i]->afisare();
    cout << endl;
    i++;
    }
}
*/
