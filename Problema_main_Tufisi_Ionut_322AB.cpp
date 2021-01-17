#include "Problema_header_capitala_Tufisi_Ionut_322AB.hpp"
#include "Problema_header_localitate_Tufisi_Ionut_322AB.hpp"
#include "Problema_header_municipiu_Tufisi_Ionut_322AB.hpp"
#include "Problema_header_oras_Tufisi_Ionut_322AB.hpp"
#include "Problema_header_tara_Tufisi_Ionut_322AB.hpp"

int main(){

	Tara **v;

	v = new Tara*[10];
	Tara *a;
	int cod;

    //citesc cate unul din fiecare
    Localitate **x, **y, **z, **t, **w;

    x = new Localitate*[3];


    x[0] = new Localitate("n1",3000,1500);
    x[1] = new Localitate("n2",4000,1000);
    x[2] = NULL;

	v[0] = new Tara(x);
	//for( int i = 0; i < 2; i++)
       // delete []x[i];

    y = new Localitate*[3];

	y[0] = new Localitate("n3",2000,1000);
    y[1] = new Localitate("n4",7000,1100);
    y[2] = NULL;

    v[1] = new Tara(y);

	//v[1] = new Tara(x[2]);
	//v[2] = new Tara("cUCU"30,10);
	//v[3] = new Tara("acer",5,30);
	//v[4] = NULL;

	z = new Localitate*[3];


    z[0] = new Localitate("n5",1000,1200);
    z[1] = new Localitate("n6",5000,1900);
    z[2] = NULL;

    v[2] = new Tara(z);

    t = new Localitate*[3];


    t[0] = new Localitate("n7",9000,1500);
    t[1] = new Localitate("n8",6000,1800);
    t[2] = NULL;

    v[3] = new Tara(t);

    w = new Localitate*[3];


    w[0] = new Localitate("n9",10000,1400);
    w[1] = new Localitate("n10",4100,1600);
    w[2] = NULL;

    v[4] = new Tara(w);

    //afisez pentru verificare
	for ( int i = 0; i < 5; i++)
		v[i]->afisare();

    //afosez pentru fiecare
    //am introdus metoda "venit_total" in baza
    //ca sa pot calcula pentru fiecare
    cout << v[0]->getNrLoc() << endl;
	cout << v[1]->getNrLoc() << endl;
	cout << v[2]->getNrLoc() << endl;
	cout << v[3]->getNrLoc() << endl;
	cout << v[4]->getNrLoc() << endl;

	cout << endl;

    //sortez, cu bubble sort, dupa nr-ul de locuitori
	do{
        cod=0;
	    for ( int i = 0; i < 4; i++)
		  if(v[i]->getNrLoc() > v[i+1]->getNrLoc())
			{
              a = v[i];
	          v[i] = v[i+1];
	          v[i+1] = a;
	          cod=1;
			}
	   }while(cod==1);

    //afisez pentru verificare
    for ( int i = 0; i < 5; i++)
		v[i]->afisare();

    cout << endl;

    cout << v[0]->getVenitMed() << endl;
	cout << v[1]->getVenitMed() << endl;
	cout << v[2]->getVenitMed() << endl;
	cout << v[3]->getVenitMed() << endl;
	cout << v[4]->getVenitMed() << endl;

	cout << endl;

	//sortez, cu bubble sort, dupa venitul mediu
	do{
        cod=0;
	    for ( int i = 0; i < 4; i++)
		  if(v[i]->getVenitMed() > v[i+1]->getVenitMed())
			{
              a = v[i];
	          v[i] = v[i+1];
	          v[i+1] = a;
	          cod=1;
			}
	   }while(cod==1);

    //afisez pentru verificare
    for ( int i = 0; i < 5; i++)
		v[i]->afisare();

    //eliberez memoria
    delete []a;

    for(int i = 0 ; i < 2 ; i++)
    {
        delete []x[i];
        delete []y[i];
        delete []z[i];
        delete []t[i];
        delete []w[i];
    }

  //  for( int i = 0; i < 5; i++)
    //    delete []v[i];
   // delete []v;
	return 0;

}


