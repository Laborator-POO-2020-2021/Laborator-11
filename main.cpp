#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "oras.hpp"

int main()
{
	Localitate **a = new Localitate*[5];
	
	a[0] = new Localitate("Filipesti",800,80);
	a[1] = new Oras("Botosani",500,3000,1000);
	a[2] = new Municipiu("Deva",7000,3500,1000,"Hunedoara");
	a[3] = new Capitala("Bucuresti",50000,4000,1000,"Romania");
	a[4] = NULL;

	Localitate **b = new Localitate*[5];
	
	b[0]=new Localitate("Amiens",13000,300);
	b[1]=new Oras("Grenoble",800,2000,50);
	b[2]=new Municipiu("Bordeaux",16000,700,10,"Gironde");
	b[3]=new Capitala("Paris",89000,9000,3000,"Franta");
	b[4] = NULL;

	Localitate **c = new Localitate*[5];
	
	c[0]=new Localitate("Malaga",4000,600);
	c[1]=new Oras("Barcelona",100,8000,40);
	c[2]=new Municipiu("Palencia",5000,100,100,"Alava");
	c[3]=new Capitala("Madrid",30000,600,90,"Spania");
	c[4] = NULL;

	Localitate **d = new Localitate*[5];
	
	d[0]=new Localitate("Yambol",50,300);
	d[1]=new Oras("Silven",50,1000,190);
	d[2]=new Municipiu("Varna",30000,670,100,"Pleven");
	d[3]=new Capitala("Sofia",20000,180,800,"Bulgaria");
	d[4] = NULL;

	Localitate **e = new Localitate*[5];
	
	e[0]=new Localitate("Tg Ocna",200,10);
	e[1]=new Oras("Buhusi",400,80,400);
	e[2]=new Municipiu("Onesti",9000,20,100,"Bacau");
	e[3]=new Capitala("Bucuresti",50000,4000,1000,"Romania");
	e[4] = NULL;
	
    Tara **v = new Tara*[5];
	v[0] = new Tara(a); 
	v[1] = new Tara(b);
	v[2] = new Tara(c);
	v[3] = new Tara(d);
	v[4] = new Tara(e);

	Tara *aux;
	 for(int i=0 ; i<4 ; i++)
	 {
	 	for(int j =i+1; j<5 ; j++)
	 	{
	 		 if(v[i]->Locuitori()> v[j]->Locuitori())  
	 		 {
	 		 	aux = v[i];
	 		 	v[i] = v[j];
	 		 	v[j] = aux;
			}
		}
	 	  
	 }
	 
	cout<<"Sortare in ordine crescatoare dupa locuitori:"<< endl;
	for(int i=0;i<5; i++)
	 {
	 	cout << "---- Tara Nr. " << i << " -----" << endl << endl;
	 	cout<<*(v[i]);
	 	cout << "Locuitori:" << v[i]->Locuitori() << endl << endl;
	 }
   
   
    for(int i=0; i<4; i++)
	 {
	 	for(int j=i+1 ;j<5 ;j++)
	 	{
	 		 if(v[i]->Venit()> v[j]->Venit()) 
	 		 {
	 		 	aux = v[i];
	 		 	v[i] = v[j];
	 		 	v[j] = aux;
			}
		}
	 	  
	 }
	 
	cout<<"Sortare in ordine crescatoare dupa venit mediu: "<<endl;
	for(int i=0; i<5; i++)
	 {
	 	cout<<"---- Tara Nr. "<<i<<" -----"<<endl<< endl;
	 	cout<<*(v[i]);
	 	cout <<"Venitul mediu:" << v[i]->Venit()<< endl;
	 	cout << endl;
	 }
	 
	 delete []v, a, b, c, d, e;

	return 0;
}