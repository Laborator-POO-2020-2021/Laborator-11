#ifndef LOCALITATE_H
#define LOCALITATE_H
#include <iostream>
#include <string.h>
using namespace std;


class Localitate {
        char *nume;
        int nr_locuitori;
        int venit_mediu;
        public:
        	
        	Localitate(){
			}
			Localitate(char *nume,int nr_locuitori,int venit_mediu){
				this->nume=new char[strlen(nume)+1];
				strcpy(this->nume,nume);
				this->nr_locuitori=nr_locuitori;
				this->venit_mediu=venit_mediu;
			}
			~Localitate(){
				delete []nume;
			}
        	virtual void show(){
        		cout<<"Nume:"<<this->nume<<endl;
        		cout<<"Nr_locuitori:"<<this->nr_locuitori<<endl;
        		cout<<"Venit_mediu:"<<this->venit_mediu<<endl;
			}
			int getVenitMediu(){
				return this->venit_mediu;
			}
			int getNrLocuitori(){
				return this->nr_locuitori;
			}
};


#endif
