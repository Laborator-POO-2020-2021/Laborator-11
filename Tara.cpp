#include "Tara.hpp"
#include "Capitala.hpp"
#include "Municipiu.hpp"

Tara::Tara(){
	v = NULL;
}
Tara::~Tara(){
	delete []v;
}
Tara::Tara(Localitate** b){
	v = b;
}
int Tara::getNrLoc(){
	int nrLoc = 0;
	int nr_loc = 0;
	Localitate *aux = *v;
	while(aux!=NULL){
		nr_loc++;
		aux = v[nr_loc];
	}
	for(int i=0;i<nr_loc;i++)
		nrLoc = nrLoc + v[i]->getNrLoc();
	return nrLoc;
}
float Tara::getVenit(){
	int venit = 0;
	int nr_loc = 0;
	Localitate *aux = *v;
	while(aux!=NULL){
		nr_loc++;
		aux = v[nr_loc];
	}
	for(int i=0;i<nr_loc;i++)
		venit = venit + v[i]->getVenit();
	return venit/(float)nr_loc;
	
}
void Tara::afisare(){
	int nr_loc = 0;
	Localitate *aux = v[0];
	while(aux!=NULL){
		v[nr_loc]->afisare();
		nr_loc++;
		aux = v[nr_loc];
	}
}
