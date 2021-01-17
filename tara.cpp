#include "tara.hpp"

Tara::Tara()
{
    v=NULL;
}

Tara::Tara(Localitate **v)
{
    int i;
    this->v=new Localitate*[5];
    for(i=0; i<5; i++){
        this->v[i]=v[i];
    }

}

Tara::Tara(const Tara &obj)
{
    v=NULL;
    *this=obj;
}


int Tara::nr_loc()
{
    int total=0;
    int i;

    for(i=0; i<4; i++)
        total=total+v[i]->nr_loc();

    return total;
}
int Tara::getVenit()
{
    int total=0;
    int i;

    for(i=0; i<4; i++)
        total=total+v[i]->getVenit();

    return total;
}
void Tara::afisare()
{
    int i;
    for(i=0; i<4; i++)
    {
        v[i]->afisare();
    }
}
