#ifndef MUNI_H
#define MUNI_H
#include <iostream>
#include <string.h>
using namespace std;

#include "Oras.h"

	class Municipiu:public Oras{
	        char * regiune;
	        public:
	        	Municipiu(char *regiune, char *nume,int nr_locuitori,int venit_mediu,int bonus_venit ):Oras(nume,nr_locuitori,venit_mediu,bonus_venit){
	        		this->regiune=new char[strlen(regiune)+1];
					strcpy(this->regiune,regiune);
				}
				~Municipiu(){
					delete []this->regiune;
				}
	        	virtual void show(){
	        		Oras::show();
	        		cout<<"Regiune:"<<this->regiune;
				}
	};

#endif
