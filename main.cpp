//
// Created by Bogdan on 15.01.2021.
//
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"
int main()
{
    Oras obj1 = Oras("Bucuresti",1000000,6000,2000);
    obj1.afisare();
    Municipiu obj3 = Municipiu("Ploiesti",500000,5500,1500,"Prahova");
    obj3.afisare();
    Capitala obj4 = Capitala("Pitesti",400500,5200,1700,"Romania");
    obj4.afisare();
    Localitate**v = new Localitate*[4];
    v[0] = new Localitate("Bucuresti",1000000,6000);
    v[1] = new Oras("Bucuresti",1000000,6000,2000);
    v[2] = new Municipiu("Ploiesti",500000,5500,1500,"Prahova");
    v[3] = new Capitala("Pitesti",400500,5200,1700,"Romania");
    Tara*vector = new Tara[5];
    cout<<"pana aici e ok";
    vector[0] = Tara(v);
    cout<<endl<<endl;
    cout<<"Tara1: "<<endl;
    vector[0].afisare();
    Localitate**v1 = new Localitate*[4];
        v1[0]=new Localitate("Darmanesti",6000,1500);
        v1[1] = new Oras("Brasov",120000,4500,2000);
        v1[2] = new Oras("Rasnov",30000,3500,1200);
        v1[3] = new Municipiu("Qatar",345000,2000,1000,"Romania");
    vector[1] = Tara(v1);
    cout<<endl<<endl;
    cout<<"Tara2: \n";
    vector[1].afisare();
    Localitate**v2 = new Localitate*[4];
         v2[0]=new Localitate("Darmanesti",6000,1500);
         v2[1] = new Oras("Sibiu",125000,4510,2100);
         v2[2] = new Capitala("Rasnov",30000,3500,1200,"Brasov");
         v2[3] = new Capitala("Slobozia",32000,2500,1000,"Romania");
    vector[2] = Tara(v2);
    cout<<endl<<endl;
    cout<<"Tara3: \n";
    vector[2].afisare();
    Localitate**v3 = new Localitate*[4];
    v3[0]=new Localitate("Darmanesti",6000,1500);
    v3[1] = new Localitate("Sibiu",125000,4510);
    v3[2] = new Capitala("Giurgiu",34000,3200,1100,"Giurgiu");
    v3[3] = new Capitala("Slobozia",32600,2300,1400,"Romania");
    vector[3] = Tara(v3);
    cout<<endl<<endl;
    cout<<"Tara4: \n";
    vector[3].afisare();
    Localitate**v4 = new Localitate*[4];
    v4[0]=new Localitate("Targoviste",40000,4000);
    v4[1] = new Oras("Moreni",12000,3000,1200);
    v4[2] = new Capitala("Ploiesti",35000,3400,1700,"Prahova");
    v4[3] = new Municipiu("Bucuresti",325000,6000,1800,"Romania");
    vector[4] = Tara(v4);
    cout<<endl<<endl;
    cout<<"Tara4: \n";
    vector[4].afisare();
    Tara aux;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
        {
            if(vector[i].Locuitori() > vector[j].Locuitori())
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    cout<<endl<<endl;
        cout<<"Tarile sortate dupa numarul de locuitori, in ordine crescatoare sunt:"<<endl<<endl;
        for(int i=0;i<5;i++)
        {
            vector[i].afisare();
            cout<<"Nr_locuitori: "<<vector[i].Locuitori();
            cout<<endl<<endl;
        }

    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
        {
            if(vector[i].getVenit_mediu() > vector[j].getVenit_mediu())
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    cout<<endl<<"Tarile sortate dupa venitul medie, in ordine crescatoare sunt: "<<endl<<endl;
    for(int i=0;i<5;i++)
    {
        vector[i].afisare();
        cout<<"Venit mediu: "<<vector[i].getVenit_mediu();
        cout<<endl<<endl;
    }
    cout<<"Detaliile despre fiecare tara in parte: "<<endl<<endl;
    for(int i=0;i<5;i++)
    {
        if(i==0) cout<<"pentru prima tara: "<<endl<<endl;
        else cout<<"pentru a-"<<i+1<<"-a tara: "<<endl<<endl;
        vector[i].afisare();
    }
     for(int i=0;i<4;i++)
    {
        delete v[i];
        delete v1[i];
        delete v2[i];
        delete v3[i];
        delete v4[i];
    }
    delete []v;
    delete[]v1;
    delete[]v2;
    delete[]v3;
    delete[]v4;
    delete[]vector;
return 0;
}

