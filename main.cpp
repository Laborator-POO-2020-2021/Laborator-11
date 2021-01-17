#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"

int main()
{
    int i;
    Localitate **l1;

    l1=new Localitate*[4];

    l1[0]=new Localitate("Birra",1000,1000);
    l1[1]=new Oras(15000,15000,2000,"Republic");
    l1[2]=new Municipiu("Leskovic",87000,25000,10000,"Kolonje");
    l1[3]=new Capitala("Tirane",900000,80000,38000,"Albania");

    Localitate **l2;

    l2=new Localitate*[4];

    l2[0]=new Localitate("Kristalopihia",8200,450);
    l2[1]=new Oras(26000,22100,3500,"Venizelos");
    l2[2]=new Municipiu("Thesalia",200000,76000,19420,"Kardista");
    l2[3]=new Capitala("Atena",1234000,154000,54200,"Greece");

    Localitate **l3;

    l3=new Localitate*[4];

    l3[0]=new Localitate("Tregu",3000,100);
    l3[1]=new Oras(14000,14000,7000,"Kratar");
    l3[2]=new Municipiu("Fushe Kosove",38000,13000,4000,"Bedene");
    l3[3]=new Capitala("Pristina",741000,54000,30000,"Kosovo");

    Localitate **l4;

    l4=new Localitate*[4];

    l4[0]=new Localitate("Srapska",3550,270);
    l4[1]=new Oras(20000,20000,8000,"Ujemire");
    l4[2]=new Municipiu("Vardar",50000,17000,9000,"Novoselo");
    l4[3]=new Capitala("Skopie",986000,97000,62080,"North Macedonia");

    Localitate **l5;

    l5=new Localitate*[4];

    l5[0]=new Localitate("Parka",1000,100);
    l5[1]=new Oras(20000,20000,7000,"Plava");
    l5[2]=new Municipiu("Gucia",65000,20000,9000,"Budva");
    l5[3]=new Capitala("Podgorica",7640000,69206,60000,"Montenegro");

    Tara **t;

    t=new Tara*[5];

    t[0]=new Tara(l1);
    t[1]=new Tara(l2);
    t[2]=new Tara(l3);
    t[3]=new Tara(l4);
    t[4]=new Tara(l5);
//sortare dupa numerul de locuitori
    for(i=0; i<5; i++)
    {
        cout<<" "<<t[i]->nr_loc()<<" "<<endl;
    }
//sortare dupa venitul medie
    for(i = 0; i<5; i++)
    {
        cout <<" "<<t[i]->getVenit()<<" ";
    }
//Afisarea tarilor
    for(i=0; i<5; i++)
    {
        t[i]->afisare();
    }

    return 0;
}
