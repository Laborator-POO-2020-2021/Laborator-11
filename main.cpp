#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"


int main()
{
    Localitate **x = new Localitate*[4];
    x[0] = new Localitate("Gaesti",10000,1500);
    x[1] = new Oras(2500,"Picior de munte",5000,1000);
    x[2] = new Municipiu("Muntenia",3000,"Dumbrava",5000,2500);
    x[3] = new Capitala("Romania",3500,"Bucuresti",5000,3000); 

     Localitate **y = new Localitate*[4];
    y[0] = new Localitate("Viisoara",20000,10000);
    y[1] = new Oras(2500,"Titu",5000,10000);
    y[2] = new Municipiu("Oltenia",30000,"Suta seaca",1000,1000);
    y[3] = new Capitala("Romania",35000,"Bucuresti",50000,30000); 

        Localitate **a = new Localitate*[4];
    a[0] = new Localitate("Aren",169000,199000);
    a[1] = new Oras(85000,"Zaragoza",60010,21000);
    a[2] = new Municipiu("Aragon",38000,"Leria",160000,29000);
    a[3] = new Capitala("Spania",45000,"Madrid",59000,38000); 

        Localitate **b = new Localitate*[4];
    b[0] = new Localitate("Rancaciov",76000,50000);
    b[1] = new Oras(25000,"Pucioasa",5000,1000);
    b[2] = new Municipiu("Oltenia",3000,"Craiova",10010,2000);
    b[3] = new Capitala("Romania",3500,"Bucuresti",5000,3000); 

		Localitate **c = new Localitate*[4];
    c[0] = new Localitate("lara",66500,23000);
	c[1] = new Oras(21000,"focus",34000,46900);
    c[2] = new Municipiu("Arena",40000,"Mainus",14000,2500);
    c[3] = new Capitala("Nothing",3000,"Yes",34002,20155); 


    Tara *v = new Tara(x);
    v->afisare();
    Tara *z = new Tara(y);
    z->afisare();
    Tara *m = new Tara(a);
    Tara *n = new Tara(b);
    Tara *d = new Tara(c);
    m->afisare();
    n->afisare();
    d->afisare();

    Tara *aux = new Tara();
    Tara **u = new Tara*[5];
    u[0] = v;
    u[1] = z;
    u[2] = m;
    u[3] = n;
    u[4] = d;
    for(int i = 0; i < 4 ;i++){
        for(int j = i +1 ; j < 5; j++)
        {
            if(u[i]->Nr_tot_loc() < u[j]->Nr_tot_loc()){
                aux = u[i];
                u[i] = u[j];
                u[j] = aux;

            }
        }
    }
    for(int i = 0; i< 5; i++){
        u[i]->afisare();
    }
    for(int i = 0; i < 4 ;i++){
        for(int j = i +1 ; j < 5; j++)
        {
            if(u[i]->Venit_mediu() < u[j]->Venit_mediu()){
                aux = u[i];
                u[i] = u[j];
                u[j] = aux;

            }
        }
    }
    for(int i = 0; i< 5; i++){
        u[i]->afisare();
    }

}
