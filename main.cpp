#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"


int main()
{
    Tara **v;
    Localitate **loc1, **loc2, **loc3, **loc4, **loc5;
    
    loc1 = new Localitate*[5];
    loc1[0] = new Localitate("Bolintin-Vale",4500,2500);
	loc1[1] = new Oras(200,"Adunatii-Copaceni",5800,3400);
	loc1[2] = new Municipiu("Muntenia",1000,"Giurgiu",6135,2500) ;	
	loc1[3] = new Capitala("Romania",1700,"Bucuresti",68342,5000);
    loc1[4] = NULL;
    
    
    loc2 = new Localitate*[3];
    loc2[0] = new Oras(100,"Pascani",7745,2400);
    loc2[1] = new Municipiu("Moldova",1000,"Iasi",77000,3000) ;	
    loc2[2] = NULL;
    
    loc3 = new Localitate*[3];
    loc3[0] = new Oras(100,"Milano",8000,3000);
    loc3[1] = new Capitala("Italia",1500,"Roma",68300,3200) ;
	loc3[2] = NULL;	
    
    loc4 = new Localitate*[3];
    loc4[0] = new Oras(100,"Calafat",4000,1300);
    loc4[1] = new Municipiu("Oltenia",1100,"Craiova",66000,2000) ;	
    loc4[2] = NULL;	
    
    loc5 = new Localitate*[3];
    loc5[0] = new Oras(100,"Lion",3600,900);
    loc5[1] = new Capitala("Franta",1000,"Paris",54000,1900) ;	
    loc5[2] = NULL;	
  
    v = new Tara*[5];
	v[0] = new Tara(loc1); 
	v[1] = new Tara(loc2);
	v[2] = new Tara(loc3);
	v[3] = new Tara(loc4);
	v[4] = new Tara(loc5);

	Tara *aux;
	
	
	cout<<"Tari: "<<endl<<endl;
	
	for(int i = 0 ; i < 5; i ++)
	 {
	 	cout << "===== Tara " << i + 1 << " =====" << endl << endl;
	 	v[i]->afisare();
	 	cout << "Nr de locuitori ai tarii: " << v[i]->NrLoc() << endl;
	 	cout << "Venitul mediu al tarii " << v[i]->VenitMed() << endl << endl;
	 	cout << endl;
	 }
	 
	 
	 for(int i = 0 ; i < 4 ; i ++)
	 {
	 	for(int j = i+1 ; j < 5 ; j ++)
	 	{
	 		 if(v[i]->NrLoc() > v[j]->NrLoc())  
	 		 {
	 		 	aux = v[i];
	 		 	v[i] = v[j];
	 		 	v[j] = aux;
			}
		}
	 	  
	 }
	 
	
	cout<<"Sortare tari dupa nr locuitori:"<< endl << endl;
	for(int i = 0 ; i < 5; i ++)
	 {
	 	cout << "===== Tara " << i + 1 << " =====" << endl << endl;
	 	v[i]->afisare();
	 	cout << "Nr de locuitori ai tarii: " << v[i]->NrLoc() << endl << endl;
	 	cout << endl;
	 }
   
   
    for(int i = 0 ; i < 4 ; i ++)
	 {
	 	for(int j = i+1 ; j < 5 ; j ++)
	 	{
	 		 if(v[i]->VenitMed() > v[j]->VenitMed() ) 
	 		 {
	 		 	aux = v[i];
	 		 	v[i] = v[j];
	 		 	v[j] = aux;
			}
		}
	 	  
	 }
	 
	cout<<"Sortare tari dupa venit mediu: "<< endl << endl;
	for(int i = 0 ; i < 5; i ++)
	 {
	 	cout << "===== Tara " << i + 1 << " =====" << endl << endl;
	 	v[i]->afisare();
	 	cout << "Venitul mediu al tarii " << v[i]->VenitMed() << endl << endl;
	 	cout << endl;
	 }
	 
	 delete []v;
	 delete []loc1;
	 delete []loc2;
	 delete []loc3;
	 delete []loc4;
	 delete []loc5;

	 
	return 0;
}
