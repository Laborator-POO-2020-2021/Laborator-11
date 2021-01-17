#include "Tara.hpp"

Tara::Tara():v(NULL){}
Tara::Tara(Localitate **v):v(v){}
Tara::~Tara()
{
    int i=0;
    while(v[i]!=NULL)
    {
        delete v[i];
        i++;
    }
    delete []v;
}
void Tara::afisare_tara()
{
    int i=0;
    while(v[i]!=NULL)
    {
        v[i]->afisare();
        cout<<endl;
        i++;
    }
}
float Tara::venit_mediu_tara()
{
    int i=0;
    float suma_venit=0;
    float suma_locuitori=0;
    while(v[i]!=NULL)
    {
        suma_venit=suma_venit+v[i]->get_venit();
        suma_locuitori=suma_locuitori+v[i]->get_nr_locuitori();
        i++;
    }
    return suma_venit/suma_locuitori;
}

int Tara::nr_loc()
{
    int i=0;
    float suma_locuitori=0;
    while(v[i]!=NULL)
    {
        suma_locuitori=suma_locuitori+v[i]->get_nr_locuitori();
        i++;
    }
    return suma_locuitori;
}

char* Tara::get_nume_tara()
{
    int i=0;
    while(v[i]!=NULL)
    {
        if(strcmp(typeid(*v[i]).name(),typeid(Capitala).name())==0)
            return dynamic_cast<Capitala*>(v[i])->get_tara();
        i++;
    }
}

void Tara::afisare_detalii()
{
    int i=0;
    while(v[i]!=NULL)
    {
        v[i]->afisare();
        cout<<endl<<"Venitul total este:\n"<<v[i]->get_venit();
        cout<<endl<<"Nr de locuitori este:\n"<<v[i]->get_nr_locuitori();
        cout<<endl<<endl<<endl;
        i++;
    }

}
