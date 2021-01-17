#include "tara.hpp"

int main()
{
    Localitate **l1;
    l1=new Localitate*[5];
    l1[0]=new Localitate("Drobeta",600,2500);
    l1[1]=new Oras("Brasov",3300,2500,10000);
    l1[2]=new Municipiu("Buftea",2200,2500,50000,"Ilfov");
    l1[3]=new Capitala("Bucuresti",20000,2500,7000000,"Romania");
    l1[4]=NULL;

    Localitate **l2;
    l2=new Localitate*[5];
    l2[0]=new Localitate("Dusseldorf",700,3200);
    l2[1]=new Oras("Munchen",5400,3200,80000);
    l2[2]=new Municipiu("Frankfurt",6700,3200,60000,"Bavaria");
    l2[3]=new Capitala("Berlin",37690,3200,6000000,"Germania");
    l2[4]=NULL;

    Localitate **l3;
    l3=new Localitate*[5];
    l3[0]=new Localitate("Bodrum",800,2200);
    l3[1]=new Oras("Antalya",7800,2200,20000);
    l3[2]=new Municipiu("Istambul",2800,2200,80000,"Pamukkale");
    l3[3]=new Capitala("Ankara",55040,2200,7000000,"Turcia");
    l3[4]=NULL;

    Localitate **l4;
    l4=new Localitate*[5];
    l4[0]=new Localitate("Cannes",500,3000);
    l4[1]=new Oras("Bordeaux",9800,3000,50000);
    l4[2]=new Municipiu("Nisa",1900,3000,90000,"Marsilia");
    l4[3]=new Capitala("Paris",21000,3000,5000000,"Franta");
    l4[4]=NULL;

    Localitate **l5;
    l5=new Localitate*[5];
    l5[0]=new Localitate("Zermatt",300,4000);
    l5[1]=new Oras("Lucerna",2100,4000,30000);
    l5[2]=new Municipiu("Geneva",7800,4000,80000,"Clusaz");
    l5[3]=new Capitala("Berna",10350,4000,1000000,"Elvetia");
    l5[4]=NULL;

    Tara **t;
    t=new Tara*[5];
    t[0]=new Tara(l1);
    t[1]=new Tara(l2);
    t[2]=new Tara(l3);
    t[3]=new Tara(l4);
    t[4]=new Tara(l5);



    cout<<"Tarile cu detalii:"<<endl;
    for(int i=0;i<5;i++)
    {
        t[i]->afisare_tara();
        cout<<endl;
    }

    Tara *aux;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
    {
        if(t[i]->getpop() < t[j]->getpop())
        {
            aux=t[i];
            t[i]=t[j];
            t[j]=aux;
        }
    }
    cout<<endl<<endl;


    cout<<"Tarile ordonate dupa numaul de locuitori:"<<endl;
    for(int i=0;i<5;i++)
    {
        t[i]->afisare_tara();
        cout<<endl;
    }


    Tara *aux1;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
    {
        if(t[i]->getvenit_tara() < t[j]->getvenit_tara())
        {
            aux1=t[i];
            t[i]=t[j];
            t[j]=aux1;
        }
    }
    cout<<endl<<endl;

    cout<<"Tarile ordonate dupa venitul mediu:"<<endl;
    for(int i=0;i<5;i++)
    {
        t[i]->afisare_tara();
        cout<<endl;
    }

    delete []l1;
    delete []l2;
    delete []l3;
    delete []l4;
    delete []l5;
    delete []t;
    return 0;
}
