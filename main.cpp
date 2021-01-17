#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

using namespace std;

/*void sortare(Tara *tari, int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if ((tari[i].getLocTot())>(tari[j].getLocTot()))
            {
                schimba(tari[i],tari[j]);
            }
        }
    }
}*/

int main()
{
    char c[50]="Campina",r1[50]="Prahova",c21[50]="Bucuresti",t[50]="Romania";
    char d1[50]="Birmingham",d2[50]="Londra",d3[50]="Liverpool",d4[50]="Gatwick",r2[50]="Manchester",t2[50]="Anglia";
    char e1[50]="Pula",e2[50]="Zagreb",e3[50]="Dubrovnik",t3[50]="Croatia";
    char f1[50]="Budapesta",f2[50]="Gyula",r4[50]="Panonia",t4[50]="Ungaria";
    char g1[50]="Viena",g2[50]="Tyrol",r5[50]="Wien",t5[50]="Austria";

    Municipiu o(c,25000, 1800, 250, r1);
    o.setVenit(o.getBonus()+o.getVenit());
    Capitala cap(c21,100000,3000,400,t);
    cap.setVenit(cap.getBonus()+cap.getVenit());
    Localitate *l11=&o,*l12=&cap;
    Tara tara1(2);
    tara1.addLoc(l11);
    tara1.addLoc(l12);

    Municipiu m1(d1,30000,2100,300, r2);
    m1.setVenit(m1.getBonus()+m1.getVenit());
    Capitala c1(d2,200000,5000,800,t2);
    c1.setVenit(c1.getBonus()+c1.getVenit());
    Oras o1(d3,110000,2800,400);
    o1.setVenit(o1.getBonus()+o1.getVenit());
    Localitate l1(d4,83000,2200);
    Localitate *l21=&m1,*l22=&c1,*l23=&o1,*l24=&l1;
    Tara tara2(4);
    tara2.addLoc(l21);
    tara2.addLoc(l22);
    tara2.addLoc(l23);
    tara2.addLoc(l24);

    Localitate l2(e1,75000,3400);
    Capitala c2(e2,99000,4100,650,t3);
    c2.setVenit(c2.getBonus()+c2.getVenit());
    Oras o2(e3,77000,3200,510);
    o2.setVenit(o2.getBonus()+o2.getVenit());
    Localitate *l31=&l2,*l32=&c2,*l33=&o2;
    Tara tara3(3);
    tara3.addLoc(l31);
    tara3.addLoc(l32);
    tara3.addLoc(l33);

    Capitala c3(f1,100000,4100,650,t4);
    c3.setVenit(c3.getBonus()+c3.getVenit());
    Municipiu m3(f2,13000,2000,250,r4);
    m3.setVenit(m3.getBonus()+m3.getVenit());
    Localitate *l41=&c3,*l42=&m3;
    Tara tara4(2);
    tara4.addLoc(l41);
    tara4.addLoc(l42);

    Capitala c4(g1,300000,7000,700,t5);
    c4.setVenit(c4.getBonus()+c4.getVenit());
    Municipiu m4(g2,20000, 10000, 1000, r5);
    m4.setVenit(m4.getBonus()+m4.getVenit());
    Localitate *l51=&c4,*l52=&m4;
    Tara tara5(2);
    tara5.addLoc(l51);
    tara5.addLoc(l52);

    Tara tari[5];
    tari[0]=tara1;
    tari[1]=tara2;
    tari[2]=tara3;
    tari[3]=tara4;
    tari[4]=tara5;

    for (int i=0;i<4;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            //cout<<tari[i].getLocTot()<<endl<<tari[j].getLocTot()<<endl;
            if (tari[i].getLocTot()>tari[j].getLocTot())
            {
                //cout<<i<<" "<<j<<endl;
                Tara aux=tari[i];
                tari[i]=tari[j];
                tari[j]=aux;
            }
        }
    }
    //cout<<((tari[0].getLocTot())>(tari[1].getLocTot()))<<endl;
    //sortare(tari,5);
    //cout<<"SUCCES";
    for (int i=0;i<5;i++)
        tari[i].afisare();

    for (int i=0;i<4;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (tari[i].getBani()>tari[j].getBani())
            {
                Tara aux=tari[i];
                tari[i]=tari[j];
                tari[j]=aux;
            }
        }
    }
    for (int i=0;i<5;i++)
        tari[i].afisare();
    return 0;
}
