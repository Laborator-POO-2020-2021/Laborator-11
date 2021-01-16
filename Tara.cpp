#include "Tara.hpp"

Tara::Tara()
{
    v = NULL;
}

Tara::Tara(Localitate *v)
{
    int n = 5;
    this->v = new Localitate[n+1];
    for(int i = 0; i < n; i++)
        this->v[i] = v[i];

}

void Tara::afisare()
{
   for(int i = 0; i < 5; i++)
    {
        v[i].afisare();
        cout<<endl;
    }

}

void Tara::sortare_venit()
{ Localitate t;

    for ( int i = 0; i < 5 - 1; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if(v[i].getVenit() < v[j].getVenit())
                {
                    t = v[i];
                    v[i] = v[j];
                    v[j] = t;
                }

        }
}

void Tara::sortare_nrloc()
{ Localitate t;

    for ( int i = 0; i < 5 - 1; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if(v[i].getNrloc() < v[j].getNrloc())
                {
                    t = v[i];
                    v[i] = v[j];
                    v[j] = t;
                }

        }
}


