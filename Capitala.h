#ifndef CAPITALA_H
#define CAPITALA_H
#include "Oras.h"
#include <iostream>
#include <string.h>
#include <iostream>
#include <string.h>
using namespace std;


class Capitala:public Oras{
        char *tara;
        
        public:
        	Capitala(char * tara,char *nume,int nr_locuitori,int venit_mediu,int bonus_venit):Oras(nume,nr_locuitori,venit_mediu,bonus_venit){
        		this->tara=new char[strlen(tara)+1];
        		strcpy(this->tara,tara);
			}
			~Capitala(){
				delete[] this->tara;
			}
			virtual void show()
			{
				Oras::show();
				cout << "Tara: " << this->tara;
			}
};

#endif
