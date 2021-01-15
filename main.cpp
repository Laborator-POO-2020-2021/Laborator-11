#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
    Localitate **v;
    Tara *a;
    v = new Localitate*[10];
    v[0] = new Localitate("Constanta",10,5);
    v[1] = new Oras("Suceava",10,6,1);
    v[2] = new Municipiu("Bucuresti","Bucuresti",20,10,2);
    v[3] = new Capitala ("Spania", "Madrid",30,12,1);
    v[4] = NULL;
    Tara **cntr;
    cntr = new Tara*[5];
    cntr[0] = new Tara (v);

    Localitate **temp = new Localitate*[2];
    temp[0] = new Localitate("Barcelona",40,10);
    temp[1] = NULL;
    cntr[1] = new Tara (temp);

    Localitate **temp2 = new Localitate*[2];
    temp2[0] = new Localitate("Gibraltar",30,15);
    temp2[1] = NULL;
    cntr[2] = new Tara (temp2);

    Localitate **temp3 = new Localitate*[2];
    temp3[0] = new Localitate("Venetia",70,30);
    temp3[1] = NULL;
    cntr[3] = new Tara (temp3);

    Localitate **temp4 = new Localitate*[2];
    temp4[0] = new Localitate("Roma",80,100);
    temp4[1] = NULL;
    cntr[4] = new Tara (temp4);


    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(cntr[j]->NrLoc()>cntr[i]->NrLoc())
            {
                a=cntr[i];
                cntr[i]=cntr[j];
                cntr[j]=a;
            }

    for(int k=0;k<5;k++)
    {
        cntr[k]->afisare();
        cout<<endl;
    }

    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(cntr[j]->VenitM()>cntr[i]->VenitM())
            {
                a=cntr[i];
                cntr[i]=cntr[j];
                cntr[j]=a;
            }
    for(int k=0;k<5;k++)
        {
            cntr[k]->afisare();
            cout<<endl;
        }

}


