#include "Tara.hpp"

//ctr. fara param.
Tara::Tara()
    {
        v = NULL;
    }

Tara::Tara(Localitate **loc)
{
    v = loc;
}

Tara::~Tara()
{
    delete []v;
}

int Tara::getPopulatie()
{
    int suma = 0;
    for(int i=0; v[i]!=NULL; i++)
    {
        suma = suma + v[i]->getPopulatie();
    }

    return suma;
}
//venit mediu:
float Tara::getVM()
{
    float suma = 0;
    int i;
    for(i=0; v[i]!= NULL; i++)
    {
        suma = suma + v[i]->getVenit();
    }

    float medie = (float)suma/i;

    return medie;
}

void Tara::afisare()
{
    for(int i=0; v[i]!=NULL; i++)
    {
        cout<<"Asezarea:\t"<<i+1<<endl;
         v[i]->afisare();
          cout<<endl;
    }
}


