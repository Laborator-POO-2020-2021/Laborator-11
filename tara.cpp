#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate **c)
{
    v=c;
}

Tara::~Tara()
{
    delete []v;
}

void Tara::afisare()
{
    int i=0;
    while(v[i])
    {
        v[i]->afisare();
        cout<<endl;
        i++;
    }
}

int Tara::NrLoc()
{
    int s = 0;
    int i = 0;
    while(v[i])
        {
         s = s + v[i]->locuitori();
         i++;
        }
    return s;
}

int Tara::VenitM()
{
    int s = 0;
    int i = 0;
    while(v[i])
        {s = s + v[i]->venit();
        i++;}
    return s;
}
