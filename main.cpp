#include "Localitate.hpp"
#include "Oras.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"


int main()
{
    Tara **v;
    Localitate **v1,**v2,**v3,**v4,**v5;
    
    v1 = new Localitate*[5];
    v1[0] = new Localitate("Bechet",1000,2200);
	v1[1] = new Oras(200,"Dabuleni",2000,3000);
	v1[2] = new Municipiu("Oltenia",300,"Craiova",360000,2500) ;	
	v1[3] = new Capitala("Romania",300,"Bucuresti",400000,3000);
    v1[4] = NULL;
    
    
    v2 = new Localitate*[3];
    v2[0] = new Oras(100,"Corabia",4000,700);
    v2[1] = new Municipiu("Oltenia",300,"Slatina",19000,2500) ;	
    v2[2] = NULL;
    
    v3 = new Localitate*[3];
    v3[0] = new Oras(100,"Mihailesti",4000,800);
    v3[1] = new Municipiu("Muntenia",400,"Giurgiu",20000,2500) ;
	v3[2] = NULL;	
    
    v4 = new Localitate*[3];
    v4[0] = new Oras(100,"Topoloveni",4000,900);
    v4[1] = new Municipiu("Muntenia",300,"Pitesti",30000,2500) ;	
    v4[2] = NULL;
    
    v5 = new Localitate*[3];
    v5[0] = new Oras(100,"Tismana",4000,1000);
    v5[1] = new Municipiu("Oltenia",300,"Targu-Jiu",19000,2500) ;
   // v5[1] = v1[0] = new Localitate("Targu-Jiu",1900,2500);
	v5[2] = NULL;	
  
    v = new Tara*[5];
	v[0] = new Tara(v1); 
	v[1] = new Tara(v2);
	v[2] = new Tara(v3);
	v[3] = new Tara(v4);
	v[4] = new Tara(v5);
	Tara *aux;
	
	
	cout<<"Afisare detalii despre fiecare tara :"<<endl<<endl<<endl;
	for(int i = 0 ; i < 5; i ++)
	 {
	 	v[i]->afisare();
	 	cout<<endl;
	 }
	 
	 
	 for(int i = 0 ; i < 4 ; i ++)
	 {
	 	for(int j = i+1 ; j < 5 ; j ++)
	 	{
	 		 if(v[i]->Locuitori() < v[j]->Locuitori())  // ordonare descrescatoare
	 		 {
	 		 	aux = v[i];
	 		 	v[i] = v[j];
	 		 	v[j] = aux;
			}
		}
	 	  
	 }
	 
	/*
	cout<<"Vectorul dupa sortarea in functie de locuitori :"<<endl<<endl<<endl;
	for(int i = 0 ; i < 5; i ++)
	 {
	 	v[i]->afisare();
	 	cout<<endl;
	 }
   */
   
    for(int i = 0 ; i < 4 ; i ++)
	 {
	 	for(int j = i+1 ; j < 5 ; j ++)
	 	{
	 		 if(v[i]->Venit() < v[j]->Venit() ) // ordonare descrescatoare
	 		 {
	 		 	aux = v[i];
	 		 	v[i] = v[j];
	 		 	v[j] = aux;
			}
		}
	 	  
	 }
	 /*
	cout<<"Vectorul dupa sortarea in functie de venit :"<<endl<<endl<<endl;
	for(int i = 0 ; i < 5; i ++)
	 {
	 	v[i]->afisare();
	 	cout<<endl;
	 }
	 */
	 delete []v;
	 delete []v1;
	 delete []v2;
	 delete []v3;
	 delete []v4;
	 delete []v5;
	 
	return 0;
}
