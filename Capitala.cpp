#include "Capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL){
}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* tara):Oras(nume, nr_locuitori, venit_mediu, bonus_venit){
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara,tara);
}

void Capitala::afisare(){
	Oras::afisare();
	cout << "Acest oras este capitala tarii " << tara << endl;
}

Capitala::~Capitala(){
	delete []tara;
}
