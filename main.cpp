// Sustac George - 323 AB

#include "Tara.hpp"
#include "Capitala.hpp"
#include "Municipiu.hpp"
#include "Oras.hpp"

using namespace std;

int main ()
{
    Localitate **v1, **v2, **v3, **v4, **v5, **v6;
    Tara* temp;
    v1 = new Localitate *[6];
    v2 = new Localitate *[6];
    v3 = new Localitate *[6];
    v4 = new Localitate *[6];
    v5 = new Localitate *[6];
    v6 = new Localitate *[6];

    v1[0] = new Localitate("Bacau", 102100, 5500);
    v1[1] = new Oras("Bacau", 102100, 5500, 1000);
    v1[2] = new Municipiu("Galati", 100420, 8500, 2000, "Moldova");
    v1[3] = new Oras("Focsani", 124200, 9000, 200);
    v1[4] = new Capitala("Bucuresti", 70100, 8000, 1500, "Romania");
    v1[5] = NULL;

    v2[0] = new Localitate("Baunach", 162500, 1100);
    v2[1] = new Oras("Dresden", 430400, 31910, 6500);
    v2[2] = new Municipiu("Munich", 114300, 66000, 7500, "Bavaria");
    v2[3] = new Oras("Emmerich am Rhein", 25004, 7000, 250);
    v2[4] = new Capitala("Berlin", 524340, 120000, 15000, "Deutschland");
    v2[5] = NULL;

    v3[0] = new Localitate("Lech", 157506, 17800);
    v3[1] = new Oras("Villach", 162100, 84500, 8190);
    v3[2] = new Municipiu("Linz", 251450, 65010, 1090, "Styria");
    v3[3] = new Oras("Wels", 15024, 10110, 8900);
    v3[4] = new Capitala("Viena", 552140, 800, 1200, "Osterich");
    v3[5] = NULL;

    v4[0] = new Localitate("Oxford", 152500, 26000);
    v4[1] = new Oras("York", 12600, 7800, 500);
    v4[2] = new Municipiu("Manchester", 11200, 4500, 1500, "Middle of the map");
    v4[3] = new Oras("Bradford", 461252, 2450, 400);
    v4[4] = new Capitala("London", 841290, 4200, 890, "UK");
    v4[5] = NULL;

    v5[0] = new Localitate("Sevilla", 1245500, 5100);
    v5[1] = new Oras("Malaga", 163452, 21561, 6542);
    v5[2] = new Municipiu("Valencia", 52185967, 521896, 5892, "Castile La Mancha");
    v5[3] = new Oras("Leon", 22519083, 243785, 2490);
    v5[4] = new Capitala("Madrid", 3453410, 10230, 1502, "Espania");
    v5[5] = NULL;

    v6[0] = new Localitate("Jinan", 2929526, 500000);
    v6[1] = new Oras("Qufu", 12894, 852345, 2345);
    v6[2] = new Municipiu("Macao", 87543, 12554, 1521, "Comunism");
    v6[3] = new Oras("Turpan", 878789231, 561289, 7000);
    v6[4] = new Capitala("Beijing", 875891093, 67548, 1231, "China");
    v6[5] = NULL;

    Tara **x = new Tara*[6];
    x[0] = new Tara(v1);
    x[1] = new Tara(v4);
    x[2] = new Tara(v2);
    x[3] = new Tara(v3);
    x[4] = new Tara(v5);
    x[5] = new Tara(v6);

    int n=6;
    cout<<"Tarile nesortate sunt: "<<'\n';
    for(int i=0; i<n; i++)
    {
         cout<<*x[i];
    }


    cout<<"Tarile sortate dupa locuitori: "<<'\n';
    for(int i = 0 ; i < n - 1; i ++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(x[i]->Populatie_T() > x[j]->Populatie_T())
                {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
        }
    }

    for(int k=0; k<n; k++)
    {
        cout<<*x[k];
        cout<<"Numarul de locuitori este: "<<x[k]->Populatie_T()<<'\n'<<'\n';
    }

    cout<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n';

    cout<<"Tarile sortate dupa veniuri: "<<'\n';
    for(int i = 0 ; i < n - 1; i ++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(x[i]->Venit_T() < x[j]->Venit_T())
                {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
        }
    }

    for(int k=0; k<n; k++)
    {
        cout<<*x[k];
        cout<<"Venitul mediu este: "<<x[k]->Venit_T()<<'\n'<<'\n';
    }

    delete []v1; delete []v2; delete []v3; delete []v4; delete []v5; delete []v6;
    delete []x;

return 0;
}
