#include "tara.hpp"

Tara::Tara():v(NULL)
{

}

Tara::Tara(Localitate** v):v(v)
{

}

Tara::Tara(Tara &obj)
{
    *this=obj;
}

Tara& Tara::operator=(const Tara&obj)
{
    int i=0;
    while(v[i]!=NULL)
    {
        this->v[i]=obj.v[i];
        i++;
    }
    return *this;
}

int Tara::getpop()
{
    int i=0,pop=0;
    while(v[i]!=NULL)
    {
            pop+=v[i]->getloc();
            i++;
    }
    return pop;
}

double Tara::getvenit_tara()
{
    int i=0;
    double venit=0, suma=0;
    while(v[i]!=NULL)
    {
            venit+=v[i]->getvenit();
            i++;
    }
    suma=venit/this->getpop();
    return suma;
}

char* Tara::get_tara()
{
    int i=0;
    while(v[i]!=NULL)
    {
        if(strcmp(typeid(*v[i]).name(),typeid(Capitala).name())==0)
            return dynamic_cast<Capitala*>(v[i])->gettara();
        i++;
    }
    return NULL;
}

void Tara::afisare_tara()
{
    cout<<"Localitatile din "<<this->get_tara() <<" sunt:"<<endl;
    int i=0;
    while(v[i]!=NULL)
    {
            v[i]->afisare();
            i++;
    }
}

Tara::~Tara()
{
    delete []v;
}
