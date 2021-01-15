#include "Tara.hpp"

Tara::Tara(){
	this->v=NULL;
}

Tara::Tara(Localitate **loc)
{
    this->v=loc;
}

Tara::~Tara()
{
    delete []v;
}

void Tara::afisare()
{
    int i=0;
    while(v[i]!=NULL){
        v[i]->afisare();
        cout<<endl;
        i++;
	}
}

int Tara::populatie()
{
	int pop=0;
	int i=0;
	while(v[i]){
		pop=pop+v[i]->getNr_locuitori();
		i++;
	}
	return pop;
}

int Tara::venit_mediu()
{
	int venit=0;
	int i=0;
	while(v[i]){
		venit=venit+v[i]->getVenit();
		i++;
	}
	return venit;
}


