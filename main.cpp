#include "Capitala.hpp"
#include "Municipiu.hpp"

int main() {

    Tara **v;
    v=new Tara*[4];

    v[0]=new Localitate("Fundeni",25,89);
    v[1]=new Oras("Brasov",4000,400,200);
    v[2]=new Capitala("Moscova",14000,900,600,"Rusia");
    v[3]=new Municipiu("Bucuresti",1500,2350,60,"Romania");



    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(v[i]->getNrLocuitori()<v[j]->getNrLocuitori())
            {
                Tara *aux;
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;

            }
        }
    }

    for(int i=0;i<4;i++)
    {
        v[i]->afisare();
        cout<<endl;
    }


    cout<<"---------------------------------------------------------------------------------------------------"<<endl;



    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(v[i]->getVenitMediu()<v[j]->getVenitMediu())
            {
                Tara *aux;
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;

            }
        }
    }

    for(int i=0;i<4;i++)
    {
        v[i]->afisare();
        cout<<endl;
    }

    return 0;
}
