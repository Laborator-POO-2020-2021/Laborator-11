#ifndef TARA_H
#define TARA_H
#include "Localitate.h"
using namespace std;

class Tara:public Localitate{
	
        Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
	public:
		Tara(){
			this->v=NULL;
		}
		Tara(Localitate ** d){
			this->v=d;
		}
		~Tara();
		
		int getHumans(){
			int i=0,add=0;
			while(v[i]!=NULL)
			{
				add+=v[i]->getNrLocuitori();
				i++;
			}
			return add;
		}
		
		float getMoney(){
			int i=0,add=0;
			while(v[i]!=NULL)
			{
				add+=v[i]->getVenitMediu();
				i++;
			}
			return add/2;
		}
		
	   virtual void show(){
			int i=0;
			while(v[i]!=NULL){
				v[i]->show();
				i++;
			}
		}
		
};

#endif
