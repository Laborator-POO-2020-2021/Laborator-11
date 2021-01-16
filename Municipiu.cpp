#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(){
	regiune = NULL;
}
Municipiu::Municipiu(const char* regiune, int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):
	Oras(bonus_venit,nume,nr_locuitori,venit_mediu){
	this->regiune = new char[strlen(regiune)+1];
	strcpy(this->regiune, regiune);		
}
Municipiu::~Municipiu(){
}
char* Municipiu::getRegiune(){
	return regiune;
}
void Municipiu::afisare(){
	cout<<"Regiune: "<<regiune<<endl;
	Oras::afisare();
}