#include "Capitala.hpp"
#include "Tara.hpp"

int main()
{
    Localitate **V,**V2,**V3,**V4,**V5;
    V = new Localitate*[5];
    V[0] = new Localitate("Ploiesti",100,3);
    V[1] = new Oras ("Constanta",200,2,5);
    V[2] = new Municipiu ("Brasov",150,3,2,"Brasov");
    V[3] = new Capitala ("Bucuresti",1000,10,4,"Romania");
    V[4] = NULL;
    Tara Romania(V);

    V2 = new Localitate*[6];
    V2[0] = new Localitate("Liverpool",430,7);
    V2[1] = new Oras ("Manchester",260,4,2);
    V2[2] = new Municipiu ("Leeds",150,5,3,"blabla");
    V2[3] = new Capitala ("London",1300,9,4,"Anglia");
    V2[4] = new Localitate("Southampton",140,5);
    V2[5] = NULL;
    Tara Anglia(V2);

    V3 = new Localitate*[4];
    V3[0] = new Localitate("Lazio",200,3);
    V3[1] = new Oras ("Torino",190,5,2);
    V3[2] = new Municipiu ("Milano",660,6,3,"Milano");
    V3[3] = NULL;
    Tara Italia(V3);

    V4 = new Localitate*[5];
    V4[0] = new Localitate("Obersdorf",50,6);
    V4[1] = new Oras ("Frankfurt",550,4,2);
    V4[2] = new Municipiu ("Munich",1700,7,3,"Munich");
    V4[3] = new Capitala ("Berlin",1300,5,4,"Germania");
    V4[4] = NULL;
    Tara Germania(V4);

    V5 = new Localitate*[6];
    V5[0] = new Localitate("Marseille",100,1);
    V5[1] = new Oras ("Nantes",230,5,2);
    V5[2] = new Municipiu ("Lyon",340,4,3,"blabla");
    V5[3] = new Capitala ("Paris",1225,7,4,"Franta");
    V5[4] = new Localitate("Rennes",160,5);
    V5[5] = NULL;
    Tara Franta(V5);
/*
    Romania.afisare();
    Anglia.afisare();
    Italia.afisare();
    Germania.afisare();
    Franta.afisare();
*/
    Tara h[5];
    h[0] = Romania;
    h[1] = Anglia;
    h[2] = Italia;
    h[3] = Germania;
    h[4] = Franta;

    int n = 5;
    //cout <<Romania.getPop();
    cout <<"Populatiile inainte de sortare:\n";
    cout<<"Romania: "<<h[0].getPop()<<endl;
    cout<<"Anglia: "<<h[1].getPop()<<endl;
    cout<<"Italia: "<<h[2].getPop()<<endl;
    cout<<"Germania: "<<h[3].getPop()<<endl;
    cout<<"Franta: "<<h[4].getPop()<<endl;

    cout<<endl;

    cout <<"Afisare dupa sortare:\n";
    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; j < n; j++)
            if (h[i].getPop() > h[j].getPop())
            {
                Tara aux = h[i];
                h[i] = h[j];
                h[j] = aux;
            }

    for (int i = 0; i < n; i++)
       {
            h[i].afisare();
            cout<<endl;
       }
    cout<<"venit mediu inainte de sortare:\n";

    for (int i = 0; i < n; i++)
        cout<<h[i].getVenitmediu()<<" ";
    cout<<endl;

    cout << "afisare dupa sortarea venit\n";
    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; j < n; j++)
            if (h[i].getVenitmediu() > h[j].getVenitmediu())
            {
                Tara aux = h[i];
                h[i] = h[j];
                h[j] = aux;
            }

    for (int i = 0; i < n; i++)
        cout<<h[i].getVenitmediu()<<" ";
    cout<<endl<<endl;

        for (int i = 0; i < n; i++)
       {
            h[i].afisare();
            cout<<endl;
       }
    return 0;
}
