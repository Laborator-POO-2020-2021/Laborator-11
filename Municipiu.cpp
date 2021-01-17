#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL){
}

Municipiu::Municipiu(const char* nume, int nr_locuitori, int venit_mediu, int venit_bonus, const char* regiune):Oras(nume, nr_locuitori, venit_mediu, venit_bonus){
	this->regiune = new char[strlen(regiune) + 1];
	strcpy(this->regiune,regiune);
}

void Municipiu::afisare(){
	Oras::afisare();
	cout << "Regiunea in care se afla Municipiul este " << regiune << endl;
}

Municipiu::~Municipiu(){
	delete []regiune;
}
