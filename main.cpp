#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"	//Asa asigur ca includ toate fisierele


int main()
{
	int nr=5;	//NR TARI
	
	Localitate ***vLoc=NULL;
								//Am pus pointer triplu pentru ca am nevoie de un pointer la dublu pointer
	vLoc=new Localitate**[nr];	 
	
	for (int i=0;i<nr;i++)				//TREBUIE STERS SI ASTA
		vLoc[i]=new Localitate *[nr];
		
	for (int i=0;i<nr;i++)
		vLoc[i][nr-1]=NULL;
	
	
	vLoc[0][0] = new Localitate("Craiova",80000,2000);
	vLoc[0][1] = new Oras(200,"Bechet",10000,1500);
	vLoc[0][2] = new Municipiu("Oltenia",100,"Calafat",3000,1000);
	vLoc[0][3] = new Capitala("Romania",500,"Bucuresti",2000000,2500);
	
	vLoc[1][0] = new Localitate("Hood River",5000,2000);
	vLoc[1][1] = new Oras(770,"Miami",1000000,2000);
	vLoc[1][2] = new Municipiu("Great Lakes",100,"NapperVille",30000,1250);
	vLoc[1][3] = new Capitala("SUA",2000,"Washington",5000000,4000);
	
	vLoc[2][0] = new Localitate("Debretin",12000,1600);
	vLoc[2][1] = new Oras(77,"Seghedin",10000,1500);
	vLoc[2][2] = new Municipiu("Heves",1300,"Eger",8000,1000);
	vLoc[2][3] = new Capitala("Ungaria",144,"Budapesta",1700000,3500);
	
	vLoc[3][0] = new Localitate("Nisa",80040,2001);
	vLoc[3][1] = new Oras(21,"Marsilia",10690,1520);
	vLoc[3][2] = new Municipiu("Midi-Pirinei",103,"Touluse",3020,1100);
	vLoc[3][3] = new Capitala("Franta",231,"Paris",2148000,2590);
	
	
	vLoc[4][0] = new Localitate("Corcea",12345,1800);
	vLoc[4][1] = new Oras(200,"Saranda",54321,1400);
	vLoc[4][2] = new Municipiu("Korce",1,"Pogradec",35000,1000);
	vLoc[4][3] = new Capitala("Albania",80,"Tirana",895160,2500);
	

	Tara **vTari=NULL;
	vTari=new Tara*[nr];
	
	for (int i=0; i<nr; i++)
		vTari[i]=new Tara(vLoc[i]);
		
		
	cout<<"_________________________________CERINTA 3_________________________________"<<endl;
	
	for (int i=0; i<nr-1; i++)
		for (int j=i+1; j<nr; j++) 
			if ( vTari[i]->getNrLocuitori() > vTari[j]->getNrLocuitori() ) 
			{	Tara *aux;
				aux = vTari[i];
				vTari[i] = vTari[j];
				vTari[j] = aux;
			}
			
	for (int i=0;i<nr;i++)
	{
		cout<<"POPULATIE: "<<vTari[i]->getNrLocuitori()<<endl;
		vTari[i]->afisare();
		cout<<"____________________"<<endl;
	}
	
	cout<<"_________________________________CERINTA 4_________________________________"<<endl;
	for (int i=0; i<nr-1; i++)
		for (int j=i+1; j<nr; j++) 
			if ( vTari[i]->getVenitMediu() > vTari[j]->getVenitMediu() ) 
			{	Tara *aux;
				aux = vTari[i];
				vTari[i] = vTari[j];
				vTari[j] = aux;
			}
			
	for (int i=0;i<nr;i++)
	{
		cout<<"VENIT MEDIU: "<<vTari[i]->getVenitMediu()<<endl;
		vTari[i]->afisare();
		cout<<"____________________"<<endl;
	}
	
		
	cout<<"_________________________________CERINTA 5_________________________________"<<endl;	
	for (int i=0; i<nr; i++)
	{	
		cout<<"Tara "<<i+1<<": "<<endl;
		vTari[i]->afisare();
		cout<<"____________________"<<endl;
	}
	
	
	for (int i=0;i<nr;i++)	//Stergem Localitatile			
		delete []vLoc[i];
	
	delete []vLoc;	//Sterge Pointerul initial
	delete []vTari; //Sterge tara
	
	return 0;
}
