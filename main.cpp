#include <iostream>
#include "Tara.hpp"

using namespace std;

int main()
{
    /*Localitate Loc("Salut", 5, 10);
    Loc.afisare();
    cout<<endl<<Loc.get_venit();
    cout<<endl<<Loc.get_venit_mediu();
    cout<<endl<<Loc.get_nr_locuitori();
    cout<<endl<<Loc.get_nume();
    cout<<endl;
    Oras Or("Ciao",7,15,4);
    Or.afisare();
    cout<<endl<<Or.get_venit();
    cout<<endl<<Or.get_nr_locuitori();
    cout<<endl;
    Municipiu Mu("Pacoaie",8,20,5, "Paaa");
    Mu.afisare();
    cout<<endl<<Mu.get_venit();
    cout<<endl<<Mu.get_nr_locuitori();
    cout<<endl;
    Capitala Ca("Larevedere", 10,30,15,"Larevederia");
    Ca.afisare();
    cout<<endl<<Ca.get_venit();
    cout<<endl<<Ca.get_nr_locuitori();*/

    Localitate **vect;
    vect=new Localitate*[5];
    vect[0]=new Localitate("Sovata", 5, 10);
    vect[1]=new Oras("Bacau",7,15,4);
    vect[2]=new Municipiu("Timisoara",8,20,5, "Timis");
    vect[3]=new Capitala("Bucuresti", 10,30,15,"Romania");
    vect[4]=NULL;

    Localitate **vect2;
    vect2=new Localitate*[4];
    vect2[0]=new Localitate("Spielberg", 6, 11);
    vect2[1]=new Oras("Graz",8,16,5);
    vect2[2]=new Capitala("Viena", 11,31,16,"Austria");
    vect2[3]=NULL;

    Localitate **vect3;
    vect3=new Localitate*[4];
    vect3[0]=new Localitate("Sopron", 7, 12);
    vect3[1]=new Oras("Szeged",9,17,6);
    vect3[2]=new Capitala("Budapesta", 12,32,17,"Ungaria");
    vect3[3]=NULL;

    Localitate **vect4;
    vect4=new Localitate*[4];
    vect4[0]=new Localitate("Padua", 8, 13);
    vect4[1]=new Oras("Florenta",10,18,7);
    vect4[2]=new Capitala("Roma", 13,33,18,"Italia");
    vect4[3]=NULL;

    Localitate **vect5;
    vect5=new Localitate*[4];
    vect5[0]=new Localitate("Tours", 9, 14);
    vect5[1]=new Oras("Lyon",11,19,8);
    vect5[2]=new Capitala("Paris", 14,34,19,"Franta");
    vect5[3]=NULL;

    /*int i=0;
    while(vect[i]!=NULL)
    {
        vect[i]->afisare();
        cout<<endl;
        i++;
    }
    Tara Ta(vect);
    Ta.afisare_tara();
    cout<<Ta.nr_loc()<<endl;
    cout<<Ta.venit_mediu_tara()<<endl;
    cout<<typeid(vect[2]).name()<<endl;
    cout<<typeid(vect[3]).name();*/

    Tara **tari;
    tari=new Tara*[5];
    tari[0]=new Tara(vect);
    tari[1]=new Tara(vect2);
    tari[2]=new Tara(vect3);
    tari[3]=new Tara(vect4);
    tari[4]=new Tara(vect5);

    /*tari[0]->afisare_tara();
    cout<<typeid(*vect[2]).name()<<endl;
    cout<<tari[0]->get_nume_tara();*/

    for(int i=0;i<5;i++)
    {
        cout<<"Tara:"<<tari[i]->get_nume_tara()<<endl<<tari[i]->nr_loc()<<endl<<endl;
    }
    for(int i=0;i<4;i++)
        for (int j=0;j<4-i;j++)
        {
            if(tari[j]->nr_loc()<tari[j+1]->nr_loc())
            {
                Tara *aux;
                aux=tari[j];
                tari[j]=tari[j+1];
                tari[j+1]=aux;
                aux=NULL;
            }
        }
    cout<<"\nTarile afisate in ordinea descrescatoare a nr de locuitori:\n\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Tara:"<<tari[i]->get_nume_tara()<<endl<<endl;
        tari[i]->afisare_tara();
    }

    Tara **tari1;
    tari1=new Tara*[5];
    tari1[0]=new Tara(vect);
    tari1[1]=new Tara(vect2);
    tari1[2]=new Tara(vect3);
    tari1[3]=new Tara(vect4);
    tari1[4]=new Tara(vect5);
    cout<<"Venitul este calculat ca fiind venitul fiecarei localitati(nr_loc*venit_mediu+bonus) impartit la nr total de locuitori"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Tara:"<<tari1[i]->get_nume_tara()<<endl<<tari1[i]->venit_mediu_tara()<<endl<<endl;
    }
    for(int i=0;i<4;i++)
        for (int j=0;j<4-i;j++)
        {
            if(tari1[j]->venit_mediu_tara()<tari1[j+1]->venit_mediu_tara())
            {
                Tara *aux;
                aux=tari1[j];
                tari1[j]=tari1[j+1];
                tari1[j+1]=aux;
                aux=NULL;
            }
        }
    cout<<"\nTarile afisate in ordinea descrescatoare a neitului mediu al tarii:\n\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Tara:"<<tari1[i]->get_nume_tara()<<endl<<endl;
        tari1[i]->afisare_tara();
    }

    cout<<"Tarile afisate detaliat:\n\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Tara:"<<tari1[i]->get_nume_tara()<<endl<<endl;
        tari1[i]->afisare_detalii();
    }
    for(int i=0;i<5;i++)
    {
        delete tari[i];
    }
    delete []tari;
    delete []tari1;
    return 0;
}
