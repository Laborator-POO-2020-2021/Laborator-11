#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"


int main()
{
    Localitate **x = new Localitate*[4];
    x[0] = new Localitate("Targoviste",1000,2000);
    x[1] = new Oras(2500,"Voinesti",500,1000);
    x[2] = new Municipiu("Muntenia",3000,"Campulung",1000,2500);
    x[3] = new Capitala("Romania",3500,"Oradea",5000,3000); 

     Localitate **y = new Localitate*[4];
    y[0] = new Localitate("Cannes",10000,20000);
    y[1] = new Oras(25000,"Nice",5000,10000);
    y[2] = new Municipiu("Coasta de azur",30000,"Lion",10000,25000);
    y[3] = new Capitala("Franta",35000,"Paris",50000,30000); 

        Localitate **a = new Localitate*[4];
    a[0] = new Localitate("Valencia",178000,289000);
    a[1] = new Oras(85000,"Castelion",50080,18000);
    a[2] = new Municipiu("ceva",38000,"Barcelona",140000,28000);
    a[3] = new Capitala("Spania",45000,"Madrid",59000,38000); 

        Localitate **b = new Localitate*[4];
    b[0] = new Localitate("Hollyood",96000,60000);
    b[1] = new Oras(29000,"LA",57000,15000);
    b[2] = new Municipiu("California",33000,"New York",12000,26000);
    b[3] = new Capitala("America",35500,"Washinghton",56000,34000); 

        Localitate **c = new Localitate*[4];
    c[0] = new Localitate("Oxford",18500,25000);
    c[1] = new Oras(25000,"Birmmingham",52000,16900);
    c[2] = new Municipiu("Nord",80000,"Manchester",11000,25500);
    c[3] = new Capitala("Anglia",4000,"Londra",55000,33000); 

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
