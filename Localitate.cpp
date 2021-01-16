#include "Localitate.hpp"

Localitate::Localitate(){
	nume = NULL;
	nr_locuitori = 0;
	venit_mediu = 0;
}
Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori),venit_mediu(venit_mediu){
	this->nume = new char[strlen(nume)+1];
	strcpy(this->nume, nume);	
}
Localitate::~Localitate(){
	delete []nume;
}
char* Localitate::getNume(){
	return nume;
}
int Localitate::getNrLoc(){
	return nr_locuitori;
}
int Localitate::getVenit(){
	return venit_mediu;
}
int Localitate::getVenit1(){
	return venit_mediu;
}
void Localitate::afisare(){
	cout<<"Nume: "<<nume<<endl<<"Nr Locuitori: "<<nr_locuitori<<endl<<"Venit Mediu: "<<venit_mediu<<endl<<endl;
}
