#ifndef ORAS_H
#define ORAS_H
#include "Localitate.h"
#include <iostream>
#include <string.h>
using namespace std;

class Oras:public Localitate{
        int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
        public:
        	Oras():Localitate(),bonus_venit(0){}
			Oras(char *nume,int nr_locuitori,int venit_mediu,int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu+bonus_venit){	
				this->bonus_venit=bonus_venit;
			}
		 	virtual void show(){
			 	Localitate::show();
				cout<<"Bonus venit:"<<this->bonus_venit<<endl;
			}
        
};


#endif
